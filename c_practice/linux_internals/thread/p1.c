#include<stdio.h>
#include<pthread.h>

void *mythread(void *arg){
	int num = *(int *)arg;
	printf("thread %d running!\n",num);
	return NULL;
}

int main(){

	pthread_t t1;
	pthread_t t2;
	pthread_t t3;

	int a = 1,b = 2,c = 3;

	pthread_create(&t1,NULL,mythread,&a);
	pthread_create(&t2,NULL,mythread,&b);
	pthread_create(&t3,NULL,mythread,&c);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	pthread_join(t3,NULL);

	printf("main thread finished!\n");
	return 0;
}
