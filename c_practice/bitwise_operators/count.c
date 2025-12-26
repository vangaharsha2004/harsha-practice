#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int ones=0,zeros=0;

	while(n>0){
		if(n&1){
			ones++;
		}
		else{
			zeros++;
		}
		n= n>>1;
	}

	printf("the no.of ones in a binary number %d\n",ones);
	printf("the no.of zeros in a binary number %d\n",zeros);
	return 0;
}
