#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int fact =1;
	for(int i=n;i>=1;i--){
		fact = fact*i;
	}

	printf("the factorial of the given number %d\n",fact);
	return 0;
}
