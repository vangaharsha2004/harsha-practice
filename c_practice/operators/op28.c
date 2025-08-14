#include<stdio.h>
int main(){
	int a,b,temp;

	printf("enter the numbers:");
	scanf("%d %d",&a,&b);

	if(a<b){
		temp = a;
		a = b;
		b = temp;
	}
	while(b!=0){
		temp = b;
		b = a % b;
		a = temp;
	}
	printf("the hcf of a and b is %d\n",a);
	return 0;
}
