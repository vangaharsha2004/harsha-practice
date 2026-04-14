#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<pthread.h>
#define KEY 1234
#define SIZE 100

void add(int a,int b){
	return a+b;
}
int main(){

	int shmid = shmget(KEY,sizeof(pthread_mutex_t)+SIZE,0666,IPC_CREAT);

	int *data = (int *)shmat(shmid,NULL,0);

	pthread_mutex_t *lock = (pthread_mutex_t)data;

	int *result = data+sizeof(pthread_mutex_t);

	pthread_mutex_init(lock,NULL);

	pthread_mutex_lock(lock);

	*result = add(5,3);

	pthread_mutex_unlock(lock);

	shmdt(data);

	return 0;
}
