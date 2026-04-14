#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include "msgqueqe.h"

int main(){

	struct msgbuf mesg;
	int msgid = msgget(KEY,0666|IPC_CREAT);
	mesg.mtype = 1;
	printf("enter data: ");
	fgets(mesg.mtext,sizeof(mesg.mtext),stdin);
	msgsnd(msgid,&mesg,sizeof(mesg.mtext),0);
	printf("data transfeered!\n");
	return 0;
}
