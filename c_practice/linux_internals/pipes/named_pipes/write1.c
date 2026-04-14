#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

int main(){

	mkfifo("pipe",0777);
	int fd;

	char msg[20] = "helloworld!";

	fd = open("pipe",O_WRONLY);

	write(fd,msg,strlen(msg)+1);
	close(fd);
	printf("data is transferred!\n");

	return 0;
}
