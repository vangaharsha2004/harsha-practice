#include<stdio.h>
#include<pthread.h>

void *mythread1(void* args){
	int num = *(int *)args;
	int square;
	square = num*num;
	printf("square = %d\n",square);
	return NULL;
}

void *mythread2(void* args){
	int num = *(int *)args;
	int cube = num*num*num;
	printf("cube = %d\n",cube);
	return NULL;
}

int main(){

	pthread_t tid1,tid2;
	int x=5;
	pthread_create(&tid1,NULL,mythread1,&x);
	pthread_create(&tid2,NULL,mythread2,&x);

	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);

	return 0;
}
