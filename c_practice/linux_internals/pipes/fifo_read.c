#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#define FNAME "/home/harsha/harsha-practice/c_practice/mypipe"

int main(){

	int fd;
	char buf[20];

	fd = open(FNAME,O_RDONLY);
	read(fd,buf,sizeof(buf));

	printf("data : %s\n",buf);

	close(fd);

	return 0;
}
