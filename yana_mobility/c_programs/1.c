#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	if(n%2){
		printf("the number is odd\n");
	}
	else{
		printf("the number is even\n");
	}

	return 0;
}
