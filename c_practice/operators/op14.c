#include<stdio.h>
int main(){

	float x,y,z;

	printf("enter the angle of x side:");
	scanf("%f",&x);

	printf("enter the angle of y side:");
	scanf("%f",&y);

	z = 180-x-y;

	printf("the angle of z is %.1f",z);
	return 0;
}
