#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include "shmdata.h"

int main(){

	int shmid = shmget(KEY,sizeof(struct shared),0666|IPC_CREAT);
	if(shmid == -1){
		perror("shmid");
		return 1;
	}

	struct shared *data = (struct shared *)shmat(shmid,NULL,0);
	if(data == (void *)-1){
		perror("shmat");
		return 1;
	}
	
	printf("received messages : \n");
	for(int i=0;i<data->count;i++){
		printf("%d %s\n",i+1,data->mesg[i]);
	}

	shmdt(data);
	shmctl(shmid,IPC_RMID,NULL);
	return 0;
}
