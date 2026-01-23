#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n;
	printf("enter the number:");
	scanf("%hhx",&n);
	if(n&1==1){
		printf("the %x is odd",n);
	}
	else{
		printf("the %x is even",n);
	}
}
