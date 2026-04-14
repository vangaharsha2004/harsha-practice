#include<stdio.h>
#include<pthread.h>

void *mythread(){
	printf("thread running!\n");
}
int main(){

	pthread_t t1;
	pthread_t t2;
	pthread_create(&t1,NULL,mythread,NULL);
	pthread_create(&t2,NULL,mythread,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	return 0;
}
