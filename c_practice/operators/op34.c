#include<stdio.h>
int main(){
	int n,count=0;

	printf("enter the number:");
	scanf("%d",&n);

	while(n){
		if((n&1)==1){
			count++;
		}
		n =n>>1;
	}

	printf("the no.of set bits %d",count);
	return 0;
}

