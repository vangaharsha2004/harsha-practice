#include<stdio.h>
int main(){

	int n;
	printf("enetr the number:");
	scanf("%d",&n);

	int sum,first,last;

	if(n>=10){
		last = n%10;
		while(n>0){
			first = n%10;
			n = n/10;
		}
		sum = first + last;
	}
	else{
		sum = n;
	}

	printf("the sum %d\n",sum);
	return 0;
}
