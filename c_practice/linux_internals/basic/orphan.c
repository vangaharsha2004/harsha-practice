#include<stdio.h>
#include<unistd.h>

int main(){

    if(fork() == 0){
        // Child process
        sleep(5);
        printf("Child PID: %d, Parent PID: %d\n", getpid(), getppid());
    }
    else{
        // Parent process
        printf("Parent exiting\n");
    }

    return 0;
}
