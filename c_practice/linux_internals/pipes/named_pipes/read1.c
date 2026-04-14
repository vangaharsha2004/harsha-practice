#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){

	int fd;
	char buf[20];
	fd = open("pipe",O_RDONLY);
	read(fd,buf,sizeof(buf));
	printf("received data : %s\n",buf);

	close(fd);
	return 0;
}
