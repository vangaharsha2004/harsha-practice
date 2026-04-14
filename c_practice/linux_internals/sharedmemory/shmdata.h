#ifndef SHMDATA_H
#define SHMDATA_H

#define KEY 1234
#define SIZE 100
#define MAX 5

struct shared{
	int count;
	char mesg[MAX][SIZE];
};

#endif
