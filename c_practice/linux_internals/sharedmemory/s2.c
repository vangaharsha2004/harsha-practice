#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include "shmdata.h"

int main(){

	int shmid = shmget(KEY,sizeof(struct shared),0666|IPC_CREAT);
	if(shmid == -1){
		perror("shmget");
		return 1;
	}

	struct shared *data = (struct shared *)shmat(shmid,NULL,0);

	if(data == (void *)-1){
		perror("shmat");
		return 1;
	}

	printf("how many messages (max %d) : ",MAX);
	scanf("%d",&data->count);
	getchar();

	if(data->count > MAX){
		printf("to many messages!\n");
		return 1;
	}

	for(int i=0;i<data->count;i++){
		printf("enter %d message : ",i+1);
		fgets(data->mesg[i],SIZE,stdin);
	}

	printf("message written to shared memory succesfull!\n");

	shmdt(data);

	return 0;
}
