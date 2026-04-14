#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){

	int fd;
	int pid;
	char buf[20];

	fd = open("pipe",O_RDWR);

	pid = fork();

	if(pid == 0){

		read(fd,buf,sizeof(buf));
		printf("received data : %s\n",buf);
	}
	else{
		write(fd,"hello",5);
		printf("data transferd!\n");
	}

	return 0;
}
