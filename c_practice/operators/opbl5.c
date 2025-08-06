#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n,i;

	printf("enter the number:");
	scanf("%hhd",&n);

	printf("enter the bit do you want toggle:");
	scanf("%hhd",&i);

	n = n^(1<<i);

	printf("the number after the toggle %hhd",n);
	return 0;
}
