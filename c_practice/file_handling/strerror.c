#include<errno.h>
#include<stdio.h>
#include<string.h>
int main(){

	FILE *fp;
	fp = fopen("hi.txt","r");

	printf("value of errno :%d\n",errno);
	printf("the errno message is : %s\n",strerror(errno));
	return 0;
}
