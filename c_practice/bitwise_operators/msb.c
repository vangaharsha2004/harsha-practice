#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n;
	printf("enter the number:");
	scanf("%hhd",&n);

	if(n & (1<<7)){
		printf("the msb is set!\n");
	}
	else{
		printf("the msb is not set!\n");
	}
	return 0;
}
