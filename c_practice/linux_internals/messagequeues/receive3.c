#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include "msgqueqe.h"

int main(){

	struct msgbuf mesg;
	int msgid = msgget(KEY,0666|IPC_CREAT);
	msgrcv(msgid,&mesg,sizeof(mesg.mtext),3,0);
	printf("data received : %s\n",mesg.mtext);
	msgctl(msgid,IPC_RMID,NULL);
	return 0;
}
