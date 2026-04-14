#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int argc,char *argv[]){

	int fd;
	char buffer[30];

	fd = open("myfifo",O_WRONLY);

	if(fd == -1){
		perror("open");
		exit(1);
	}

	for(int i=1;i<argc;i++){
		strcpy(buffer,argv[i]);
		write(fd,buffer,strlen(buffer)+1);
	}

	close(fd);
}

