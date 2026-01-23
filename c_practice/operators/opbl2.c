#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n,i;
	printf("enter the number:");
	scanf("%hhd",&n);
	printf("enter the bit number do you want check it is set or not:");
	scanf("%hhd",&i);
	if(n&(1<<i)){
		printf("the %d bit is set",i);
	}
	else{
		printf("the %d bit is not set",i);
	}
	return 0;
}
