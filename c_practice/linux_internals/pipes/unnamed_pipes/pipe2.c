#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(){

	int fd[2];
	char buf[20];
	char msg[20] = "helloworld!";
	pipe(fd);

	int pid = fork();

	if(pid == 0){
		read(fd[0],buf,sizeof(buf));
		printf("received data : %s\n",buf);
	}
	else{
		write(fd[1],msg,strlen(msg)+1);
	}
	return 0;
}
