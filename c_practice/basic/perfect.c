//a number is perfect number sum of its proper divisers equal to number itself

#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int sum =0;

	for(int i=1;i<=n/2;i++){
		if((n%i)==0){
			sum = sum +i;
		}
	}

	if(sum == n){
		printf("perferct number\n");
	}
	else{
		printf("not aperfect number\n");
	}
	return 0;
}
