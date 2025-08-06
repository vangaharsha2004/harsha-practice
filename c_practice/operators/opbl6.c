#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t n, count = 0;
	printf("enter the number:");
	scanf("%hhx",&n);
	
	while(n){
		if(n&1){
			count++;
		}
		n = n>>1;
	}
	printf("number of set bits %d",count);
	return 0;

}
