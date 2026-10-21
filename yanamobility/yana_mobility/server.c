#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//opencv header files
#include<opencv/cv.h>
#include<opencv/highgui.h>

//socket header files
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>

#define WIDTH 64
#define HEIGHT 64
#define CHANNELS 3                                  //3 channels equal to 3 bytes(BGR)
#define BUFFER_COUNT 4
#define BUFFER_SIZE (16*HEIGHT*CHANNELS)            //one buffer = 16x64x3 = 3072 bytes

int main(){

    IplImage *buffer[4];
    IplImage *combined;

    int sockfd[4];
    struct sockaddr_in server[4];

    //these must be same as ip_address in the client code
    const char *ip_address[BUFFER_COUNT] = {
        "127.0.0.10",
        "127.0.0.11",
        "127.0.0.12",
        "127.0.0.13"
    };

    //image for the combined 64x64 output
    combined = cvCreateImage(cvSize(WIDTH,HEIGHT),IPL_DEPTH_8U,CHANNELS);
    if(combined == NULL){
        printf("image creation failed\n");
        return 1;
    }

    for(int i=0;i<BUFFER_COUNT;i++){
        //four 16x64 buffers to store the received data
        buffer[i] = cvCreateImage(cvSize(16,HEIGHT),IPL_DEPTH_8U,CHANNELS);
        if(buffer[i] == NULL){
            printf("buffer allocation failed\n");
            return 1;
        }

        //one socket for each buffer
        sockfd[i] = socket(AF_INET,SOCK_DGRAM,0);
        if(sockfd[i]<0){
            printf("socket creation failed\n");
            return 1;
        }

        server[i].sin_family = AF_INET;
        server[i].sin_port = htons(2026);
        server[i].sin_addr.s_addr = inet_addr(ip_address[i]);

        if(bind(sockfd[i],(struct sockaddr *)&server[i],sizeof(server[i]))<0){
            printf("bind failed for %s\n",ip_address[i]);
            return 1;
        }
        printf("buffer %d waiting on %s\n",i,ip_address[i]);
    }

    cvNamedWindow("RECEIVED",CV_WINDOW_AUTOSIZE);

    while(1){
        //receive four buffers
        for(int i=0;i<BUFFER_COUNT;i++){
            ssize_t bytes_received = recvfrom(sockfd[i],buffer[i]->imageData,BUFFER_SIZE,0,NULL,NULL);
            if(bytes_received<0){
                printf("receive failed\n");
            }
            else{
                printf("buffer = %d,bytes received = %zd\n",i,bytes_received);
            }
        }

        //combine four buffers into one image
        for(int i=0;i<BUFFER_COUNT;i++){
            CvRect roi = cvRect(i*16,0,16,HEIGHT);
            cvSetImageROI(combined,roi);
            cvCopy(buffer[i],combined,NULL);
            cvResetImageROI(combined);
        }

        //show the image
        cvShowImage("RECEIVED",combined);
        if(cvWaitKey(1)==27){
            break;
        }
    }

    for(int i=0;i<BUFFER_COUNT;i++){
        cvReleaseImage(&buffer[i]);
        close(sockfd[i]);
    }
    cvReleaseImage(&combined);
    cvDestroyAllWindows();
    return 0;
}