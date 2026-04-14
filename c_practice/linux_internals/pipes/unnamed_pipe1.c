#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(){

	int fd[2];
	char buf[20];
	char msg[100] = "helloworld!";

	pipe(fd);

	int pid = fork();

	if(pid == 0){
		close(fd[1]);
		read(fd[0],buf,sizeof(buf));
		printf("receving data : %s\n",buf);
		close(fd[0]);
	}
	else{
		close(fd[0]);
		write(fd[1],msg,strlen(msg)+1);
		close(fd[1]);
	}

	return 0;
}
