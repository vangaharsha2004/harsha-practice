#include<stdio.h>
#include<stdint.h>
int main(){
	uint8_t num;
	printf("enter the number:");
	scanf("%hhu",&num);
	
	if(num==0){
		printf("there are no set bits\n");
		return 0;
	}
	int pos=-1;
	for(int i=0;num!=0;i++){
		if(num&1){
			pos=i;
		}
		num = num>>1;
	}
	printf("the posintion of a highest set bit %d\n",pos);
	return 0;
}	
