#include<stdio.h>
int main(){
	float l,b;
	float p;
	printf("enter the length of the rectangle in cm:");
	scanf("%f",&l);
	printf("enter the breadth of the rectangle in cm:");
	scanf("%f",&b);
	p=2*(l+b);
	printf("the perimeter of the rectangle in cm is %f\n",p);
	return 0;
}
