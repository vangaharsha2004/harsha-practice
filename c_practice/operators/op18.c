#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float A,B,C;

	printf("enter the three sides of traingle:");
	scanf("%f %f %f",&a,&b,&c);

	A = acos((b*b+c*c-a*a)/(2*b*c))*(180/M_PI);
	B = acos((a*a+c*c-b*b)/(2*a*c))*(180/M_PI);
	C = acos((a*a+b*b-c*c)/(2*a*b))*(180/M_PI);

	printf("the angle of a triangle are:\n");
	printf("angle A=%.2f degrees\n",A);
	printf("angle B=%.2f degrees\n",B);
	printf("angle C=%.2f degrees\n",C);
	return 0;
}
