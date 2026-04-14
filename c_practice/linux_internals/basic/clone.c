#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>   // 🔥 ADD THIS

int child_function(void *arg)
{
    printf("Hello from child process\n");
    return 0;
}

int main()
{
    char *stack;

    stack = malloc(1024 * 1024);

    clone(child_function, stack + 1024*1024, SIGCHLD, NULL);

    printf("Hello from parent process\n");

    sleep(1);

    return 0;
}
