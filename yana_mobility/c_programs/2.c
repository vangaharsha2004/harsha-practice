#include<stdio.h>

int global = 10;

void fun(){

	int normal = 0;
	static int count = 0;

	normal++;
	count++;

	printf("the difference of normal = %d and static count = %d\n",normal,count);
}

int main(){

	int local = 20;

	printf("local = %d and global = %d\n",local,global);

	fun();
	fun();
	fun();
	fun();

	return 0;
}
