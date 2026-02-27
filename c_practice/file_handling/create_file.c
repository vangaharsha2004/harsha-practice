#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	FILE *fptr;
	char str[50];
	char str1[200];

	fptr = fopen("demo.txt","r");

	if(fptr == NULL){
		printf("the file is not opened\n");
		return 0;
	}
	else{
		printf("the file opened\n");
	}

	//printf("enter the string\n");
	//scanf("%[^\n]s",str);

	//fprintf(fptr,"%s",str);

	while(fgets(str1,200,fptr)!=NULL){
		printf("%s",str1);
	}

	fclose(fptr);

	return 0;
}
