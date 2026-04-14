#include<stdio.h>
#include<unistd.h>

int main(){

	int fd[2];
	char buf[20];
	pipe(fd);

	int pid = fork();
	if(pid == 0){
		read(fd[0],buf,sizeof(buf));
		printf("received data : %s\n",buf);
	}
	else{
		write(fd[1],"hello",5);
	}
	return 0;
}
