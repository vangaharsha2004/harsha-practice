#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<pthread.h>

#define KEY 1234
#define SIZE 100

int main(){

	int shmid = shmget(KEY,SIZE+sizeof(pthread_mutex_t),0666|IPC_CREAT);

	int 
