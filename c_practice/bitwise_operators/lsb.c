#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int r=n&1;

	if(r==1){
		printf("the lsb is set!\n");
	}
	else{
		printf("the lsb is reset state!\n");
	}
	return 0;
}
