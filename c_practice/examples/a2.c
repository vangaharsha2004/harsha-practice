#include<stdio.h>

int main(){
	int n,r,sum=0;

	printf("enter the number:");
	scanf("%d",&n);

	while(n>0){
		r=n%10;

		sum = sum + r;

		n = n/10;
	}
	printf("the sum of the digits is %d",sum);
	return 0;
}
