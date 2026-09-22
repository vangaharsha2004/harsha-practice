#include<stdio.h>

int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int temp = n;
	int reverse = 0;

	while(temp){

		int r = temp%10;
		reverse = reverse*10 + r;
		temp = temp/10;
	}

	printf("the reverse of the number %d\n",reverse);
	return 0;
}
