#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

	int fd;
	int sum;

	fd = open("harsha",O_RDONLY);
	read(fd,&sum,sizeof(sum));
	printf("the factorial is : %d\n",sum);
	close(fd);
	return 0;
}
