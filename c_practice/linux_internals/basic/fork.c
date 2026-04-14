#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){

	pid_t pid;
	pid = fork();

	if(pid == 0){
		printf("i am child processes\n");
		printf("child process id : %d\n",getpid());
		printf("child's parent processes id : %d\n",getppid());
	}
	else{
		wait(NULL);
		printf("I am parent processes\n");
		printf("parent process id : %d\n",getpid());
		printf("parent's parent id(shell id) : %d\n",getppid());
	}
	return 0;
}
