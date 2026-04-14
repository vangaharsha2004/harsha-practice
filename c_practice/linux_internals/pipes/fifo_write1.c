#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){

	mkfifo("harsha",0777);
	int fd;

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int sum = 1;
	for(int i=n;i>=1;i--){
		sum = sum*i;
	}

	fd = open("harsha",O_WRONLY);
	write(fd,&sum,sizeof(sum));
	close(fd);
	return 0;
}
