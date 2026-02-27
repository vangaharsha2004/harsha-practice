#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fptr;
	char str[50];

	fptr = fopen("harsha.txt","w");

	if(fptr == NULL){
		printf("file not created\n");
	}
	else{
		printf("file created!\n");
	}

	fprintf(fptr,"harsha D vardhan!");

	fclose(fptr);


	fptr=fopen("harsha.txt","r");

	while(fgets(str,2,fptr)!=NULL){
		printf("%s",str);
	}

	fclose(fptr);

	return 0;
}
