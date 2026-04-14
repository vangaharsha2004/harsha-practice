#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include"msgqueqe.h"

int main(){

	struct msgbuf mesg;
	int msgid = msgget(KEY,0666|IPC_CREAT);
	msgrcv(msgid,&mesg,sizeof(mesg.mtext),2,0);
	printf("recived message : %s\n",mesg.mtext);
	
	return 0;
}
