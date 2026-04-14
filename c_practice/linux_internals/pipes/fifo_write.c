#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#define FNAME "/home/harsha/harsha-practice/c_practice/mypipe"

int main(){

	mkfifo(FNAME,0777);
	int fd;

	char msg[100];

	fd = open(FNAME,O_WRONLY);
	printf("enter the data:");
	fgets(msg,100,stdin);
	msg[strcspn(msg,"\n")] = '\0';

	write(fd,msg,strlen(msg)+1);
	close(fd);

	return 0;
}
