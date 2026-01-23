#include<stdio.h>
int main(){
	float a,b,sum,average;

	printf("enter the two numbers:");
	scanf("%f %f",&a,&b);

	sum = a+b;
	average = sum/2;

	printf(" sum = %.2f",sum);
	printf("average = %.2f",average);
	return 0;
}
