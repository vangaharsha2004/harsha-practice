#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fptr;

	fptr = fopen("demo.txt","r");

	if(fptr == NULL){
		printf("the file is not opened\n");
	}
	else{
		printf("the file is opened\n");
	}

	return 0;
}
