#include<stdio.h>
int main(){
	int a,b;

	printf("enter the number:");
	scanf("%d",&a);

	printf("enter the number:");
	scanf("%d",&b);

	printf("before swapping a=%d and b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;

	printf("after swapping a=%d and b=%d",a,b);

	return 0;
}
