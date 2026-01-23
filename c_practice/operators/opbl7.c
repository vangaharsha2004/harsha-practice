#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n;
	printf("enter number:");
	scanf("%hhd",&n);

	if(n>0 && (n&(n-1))==0){
		printf("%hhd is a power of 2\n",n);
	}
	else{
		printf("%hhd is not power of 2\n",n);
	}
	return 0;
}
