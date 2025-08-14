#include<stdio.h>
int main(){
	int n,i;

	printf("enter the numbers:");
	scanf("%d %d",&n,&i);

	printf("the and operation is %d\n",n&i);
	printf("the or operation is %d\n",n|i);
	printf("the xor operation is %d\n",n^i);
	return 0;
}
