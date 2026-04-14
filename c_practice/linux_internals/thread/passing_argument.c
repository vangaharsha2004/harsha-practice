#include<stdio.h>
#include<pthread.h>

void *mythread(void *arg){
	int num = *(int *)arg;
	printf(" num == %d\n",num);
	return NULL;
}

int main(){

	pthread_t tid;
	int x = 10;
	pthread_create(&tid,NULL,mythread,&x);
	pthread_join(tid,NULL);
	return 0;
}
