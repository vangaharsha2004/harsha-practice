#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	int flag = 1;

	for(int i=2;i<n;i++){
		if(n%i==0){
			flag = 0;
			break;
		}
	}

	if(flag){
		printf("The number is prime\n");
	}
	else{
		printf("the number is not prime\n");
	}

	return 0;
}
