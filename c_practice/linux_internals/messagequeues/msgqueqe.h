#ifndef MSGQUEUE_H
#define MSGQUEUE_H

#define KEY 1234

struct msgbuf{
	long mtype;
	char mtext[100];
};

#endif
