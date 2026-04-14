#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<pthread.h>

#define KEY 1234
#define SIZE 100

int main(){

	int shmid = shmget(KEY,sizeof(pthread_mutex_t)+SIZE,0666|IPC_CREAT);

	char *data = (char *)shmat(shmid,NULL,0);

	pthread_mutex_t *lock = (pthread_mutex_t *)data;

	char *msg = sizeof(pthread_mutex_t)+data;

	pthread_mutex_init(lock,NULL);
	
	pthread_mutex_lock(lock);
	printf("enter message :");
	fgets(msg,sizeof(pthread_mutex_t)+SIZE,stdin);
	pthread_mutex_unlock(lock);

	shmdt(data);
	return 0;
}

