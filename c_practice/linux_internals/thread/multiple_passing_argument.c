#include<stdio.h>
#include<pthread.h>

struct data{
	int a;
	int b;
};

void *mythread(void *arg){
	struct data *d = (struct data *)arg;
	printf("num = %d\n",d->a);
	printf("num = %d\n",d->b);
	return NULL;
}

int main(){

	pthread_t tid;
	struct data d = {10,20};
	pthread_create(&tid,NULL,mythread,&d);
	pthread_join(tid,NULL);
	return 0;
}
