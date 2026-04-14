#include<stdio.h>

int main(){

	FILE *fp;
	fp = fopen("hi.txt","w");

	fprintf(fp,"hello world");

	if(ferror(fp)==0){
		printf("data rettun sucessfully!\n");
	}
	fclose(fp);
	return 0;
}
