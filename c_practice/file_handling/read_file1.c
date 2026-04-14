#include <errno.h>
#include <stdio.h>

int main(){

	FILE *fp;

	fp = fopen("hi.txt","r");

	printf("value of errno: %d\n",errno);
	return 0;
}
