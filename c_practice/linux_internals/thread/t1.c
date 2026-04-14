#include<stdio.h>
#include<pthread.h>

void* mythread(void *arg){
	printf("hello from thread\n");
	return NULL;
}

int main(){

	pthread_t tid;
	pthread_create(&tid,NULL,mythread,NULL);
	pthread_join(tid,NULL);
	printf("hello from main\n");
	return 0;
}
