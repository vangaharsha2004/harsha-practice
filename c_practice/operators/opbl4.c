#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n,i;
	printf("enter the number:");
	scanf("%hhd",&n);
	printf("enter a bit you want to clear:");
	scanf("%hhd",&i);

	n = n&~(1<<i);

	printf("the number after clear a bit %d",n);
	return 0;
}


