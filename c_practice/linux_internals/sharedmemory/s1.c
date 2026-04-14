#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main(){

	key_t key = 1234;
	int shmid = shmget(key,1024,0666|IPC_CREAT);
	char *data = (char *)shmat(shmid,NULL,0);
	printf("enter message:");
	fgets(data,1024,stdin);
	printf("message written to shared memory\n");
	return 0;
}
