#include<stdio.h>
#include<math.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int temp =n;
	int digits = 0;
	int sum =0;
	while(temp>0){
		digits++;
		temp = temp/10;
	}
	temp = n;
	while(temp>0){
		int r = temp%10;
		sum = sum + pow(r,digits);
		temp = temp/10;
	}

	if(sum == n){
		printf("it is armstrong number\n");
	}
	else{
		printf("not armstrong number\n");
	}

	return 0;
}
