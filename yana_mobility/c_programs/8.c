#include<stdio.h>
int main(){

	int n;
	printf("enter the units upto 350:");
	scanf("%d",&n);

	printf("rupee = ");
	if(n>=1 && n<=100){
		printf("1\n");
	}
	else if(n>=101 && n<=200){
		printf("2\n");
	}
	else if(n>=201 && n<=350){
		printf("3\n");
	}

	return 0;
}
