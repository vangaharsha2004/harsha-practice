#include<stdio.h>
#define PI 3.14159
int main(){
	float radius,diameter,circumference,area;
	printf("enter the radius of the circle in cm:");
	scanf("%f",&radius);

	diameter = 2*radius;
	area = PI*radius*radius;
	circumference = 2*PI*radius;

	printf("the diameter of the circle in cm is %f\n",diameter);
	printf("the area of the circle in cm2is %f\n",area);
	printf("the circumference of the circle in cmis %f\n",circumference);
	return 0;
}

	
