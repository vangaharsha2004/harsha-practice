#include<stdio.h>
int main(){
	double base,height,area;

	printf("enter the base:");
	scanf("%lf",&base);

	printf("enter the height:");
	scanf("%lf",&height);

	area = 0.5*base*height;

	printf("the area of traingle is %.2lf",area);
	return 0;
}
