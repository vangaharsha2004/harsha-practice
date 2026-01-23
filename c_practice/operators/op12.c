#include<stdio.h>
#include<math.h>
int main(){
	double x,result;

	printf("enter a number:");
	scanf("%lf",&x);

	result = sqrt(x);

	printf("the square root is %.2lf",result);
	return 0;
}
