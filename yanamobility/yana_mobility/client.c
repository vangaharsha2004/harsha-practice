#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

//opencv header files
#include<opencv/cv.h>
#include<opencv/highgui.h>
#include<opencv2/imgcodecs/imgcodecs_c.h>
#include<opencv2/videoio/videoio_c.h>

//socket header files
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>

#define WIDTH 64                                    
#define HEIGHT 64
#define CHANNELS 3                                  //3 channels equal to 3 bytes(BGR)
#define BUFFER_COUNT 4
#define FRAME_SIZE (WIDTH*HEIGHT*CHANNELS)

//sending videos through socket (UDP protocol)
void videoBuffers(const char *folder, int index, unsigned char *data, IplImage *frame, IplImage *buffer[4], int sockfd, struct sockaddr_in server[4]){
    IplImage *combained;
    char cmd[256];
    snprintf(cmd,sizeof(cmd),"ffmpeg -v error -i %s/video%d.gif -vf \"scale=64:64,fps=25\" -f rawvideo -pix_fmt bgr24 -", folder, index);
    FILE *pipe = popen(cmd,"r");
    if(pipe == NULL){
        printf("video not found\n");
        return;
    }

    int frame_count=0;
    struct timespec start,end;
    clock_gettime(CLOCK_MONOTONIC,&start);
    while(fread(frame->imageData,1,FRAME_SIZE,pipe)==FRAME_SIZE){
        for(int i=0;i<BUFFER_COUNT;i++){
            CvRect roi = cvRect(i*16,0,16,HEIGHT);
            cvSetImageROI(frame,roi);
            cvCopy(frame,buffer[i],NULL);
            cvResetImageROI(frame);
        }
        //data sending
        for(int i=0;i<BUFFER_COUNT;i++){
           unsigned char *image_data = (unsigned char *)buffer[i]->imageData;
            int data_size = buffer[i]->imageSize;
            
            //cvNamedWindow("GIF",CV_WINDOW_AUTOSIZE);
            ssize_t bytes_sent = sendto(sockfd,image_data,data_size,0,(struct sockaddr *)&server[i],sizeof(server[i]));
            if(bytes_sent<0){
                printf("bytes sent was failed\n");
            }
            else{
                printf("buffer = %d,width = %d, height = %d, channels = %d,widthstep = %d,bytes sent = %zd\n",i,buffer[i]->width,buffer[i]->height,buffer[i]->nChannels,buffer[i]->widthStep,bytes_sent);
            }
            //cvNamedWindow("GIF",CV_WINDOW_AUTOSIZE);
            //cvShowImage("GIF",buffer[i]);
            //if(cvWaitKey(40)==27){
            //    break;
            //}
            //usleep(40000);
        
        }    

        combained = cvCreateImage(cvSize(WIDTH,HEIGHT),IPL_DEPTH_8U,CHANNELS);
        for(int i=0;i<BUFFER_COUNT;i++){
            CvRect roi = cvRect(i*16,0,16,HEIGHT);
            cvSetImageROI(combained,roi);
            cvCopy(buffer[i],combained,NULL);
            cvResetImageROI(combained);
        }
        cvNamedWindow("GIF",CV_WINDOW_AUTOSIZE);
        cvShowImage("GIF",combained);
        if(cvWaitKey(40)==27){
            break;
        }
        frame_count++;
        printf("frame number = %d\n",frame_count);
        //usleep(40000);
    }
    clock_gettime(CLOCK_MONOTONIC,&end);
    double elapsed_seconds = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec)/1000000000.0;
    printf("Time taken: %.3f seconds\n", elapsed_seconds);
    printf("frame count %d\n",frame_count);
    pclose(pipe);
}

//sending images through socket (UDP protocol)
void imageBuffers(const char *imgPath, IplImage *buffer[4], int sockfd, struct sockaddr_in server[4]){
    IplImage *combined;
    IplImage *image = cvLoadImage(imgPath,CV_LOAD_IMAGE_COLOR);
    if(image == NULL){
        printf("image not found\n");
        return;
    }

    for(int i=0;i<BUFFER_COUNT;i++){
        CvRect roi = cvRect(i*16,0,16,64);
        cvSetImageROI(image,roi);
        cvCopy(image,buffer[i],NULL);
        cvResetImageROI(image);
    }

    //data sending
    for(int i=0;i<BUFFER_COUNT;i++){
        unsigned char *image_data = (unsigned char *)buffer[i]->imageData;
        int data_size = buffer[i]->imageSize;

        
        ssize_t bytes_sent = sendto(sockfd,image_data,data_size,0,(struct sockaddr *)&server[i],sizeof(server[i]));
        if(bytes_sent<0){
            printf("bytes sent was failed\n");
        }
        else{
            printf("buffer = %d,width = %d, height = %d, channels = %d,widthstep = %d,bytes sent = %zd\n",i,buffer[i]->width,buffer[i]->height,buffer[i]->nChannels,buffer[i]->widthStep,bytes_sent);
        }
    }
    //usleep(40000);
    combined = cvCreateImage(cvSize(WIDTH,HEIGHT),IPL_DEPTH_8U,CHANNELS);
    if(combined == NULL){
        printf("image creation failed");
        return;
    }
    for(int i=0;i<BUFFER_COUNT;i++){
        CvRect roi = cvRect(i*16,0,16,64);
        cvSetImageROI(combined,roi);
        cvCopy(buffer[i],combined,NULL);
        cvResetImageROI(combined);
    }
    cvNamedWindow("GIF",CV_WINDOW_AUTOSIZE);
    cvShowImage("GIF",image);
    cvWaitKey(40);
   
    cvReleaseImage(&image);
}

int main(){
    unsigned char *data;
    IplImage *image;
    IplImage *frame;
    IplImage *buffer[4];

    int sockfd;
    struct sockaddr_in server[4];

    const char *ip_address[BUFFER_COUNT] = {
        "127.0.0.10",
        "127.0.0.11",
        "127.0.0.12",
        "127.0.0.13"
    };

    data = malloc(FRAME_SIZE);
    if(data == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    
    frame = cvCreateImage(cvSize(WIDTH,HEIGHT),IPL_DEPTH_8U,CHANNELS);
    if(frame == NULL){
        printf("cannot create image header\n");
        free(data);
        return 1;
    }

    //cvSetData(frame,data,WIDTH*CHANNELS);
    for(int i=0;i<BUFFER_COUNT;i++){
        buffer[i] = cvCreateImage(cvSize(16,HEIGHT),IPL_DEPTH_8U,CHANNELS);
        if(buffer[i]==NULL){
            printf("buffer allocation failed\n");
            while(--i>=0){
                cvReleaseImage(&buffer[i]);
            }
            cvReleaseImageHeader(&frame);
            free(data);
        }
    }
    sockfd = socket(AF_INET,SOCK_DGRAM,0);
    for(int i=0;i<BUFFER_COUNT;i++){
        server[i].sin_family = AF_INET;
        server[i].sin_port = htons(2026);
        server[i].sin_addr.s_addr = inet_addr(ip_address[i]);
    }
    while(1){
        for(int i=1;i<=10;i++){
            printf("index %d\n",i);
            char imgPath[64];
            snprintf(imgPath,sizeof(imgPath),"ICONS/icon%d.png",i);
            
            printf("Displaying Linux Icons\n");
            imageBuffers(imgPath,buffer,sockfd,server);
            sleep(5);

            printf("displaying linux GIFs\n");
            videoBuffers("GIFs",i,data,frame,buffer,sockfd,server);

            //printf("Displaying linux Icons\n");
            //imageBuffers(imgPath,buffer,sockfd,server);
            //sleep(5);

            //printf("Displaying Emoji GIFS\n");
            //videoBuffers("EMOJIS",i,data,frame,buffer,sockfd,server);
        }
    }

    for(int i=0;i<BUFFER_COUNT;i++){
        cvReleaseImage(&buffer[i]);
    }
    cvReleaseImageHeader(&frame);
    free(data);
    return 0;
}
