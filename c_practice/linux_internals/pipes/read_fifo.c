#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){

	int fd;
	char buf[30];

	mkfifo("myfifo",0777);

	fd = open("myfifo",O_RDONLY);

	while(read(fd,buf,sizeof(buf))>0){
		printf("%s\n",buf);
	}
	close(fd);
	return 0;
}
