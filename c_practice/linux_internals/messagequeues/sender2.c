#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include "msgqueqe.h"

int main(){

	struct msgbuf mesg;

	int msgid = msgget(KEY,0666|IPC_CREAT);

	for(int i=1;i<=3;i++){
		mesg.mtype = i;
		printf("enter the data : ");
		fgets(mesg.mtext,sizeof(mesg.mtext),stdin);
		msgsnd(msgid,&mesg,sizeof(mesg.mtext),0);
		printf("data transferred!\n");
	}
	return 0;
}
