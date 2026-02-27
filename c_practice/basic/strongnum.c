//a strong number is a number which the sum of factorierls of its digits equal to the number itself


#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	int sum =0;
	int temp = n;
	while(temp>0){

		int r = temp%10;
		int fact =1;
		for(int i=r;i>=1;i--){
			fact = fact*i;
		}
		sum = sum+fact;
		temp = temp/10;
	}
	if(sum == n){
		printf("strong number\n");
	}
	else{
		printf("not strong number!\n");
	}
	return 0;
}
