#include<stdio.h>

int main(){

	int n,sum = 0;

	printf("enter the number:");
	scanf("%d",&n);

	for(int i=1;i<n;i++){
		if(n%i==0){
			sum = sum+i;
		}
	}
	if(sum==n){
		printf("it is a perfect number:");
	}
	else{
		printf("it is not a perferct number:");
	}
	return 0;
}
