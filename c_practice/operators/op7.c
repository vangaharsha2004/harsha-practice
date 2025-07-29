#include<stdio.h>
#define M 100
#define K 100000
int main(){
	float centimeters,meters,kilometers;

	printf("ener the length in cm:");
	scanf("%f",&centimeters);

	meters = centimeters/M;
	kilometers = centimeters/K;

	printf("the length in meters is %f\n",meters);
	printf("the length in kilometers is %f",kilometers);
	return 0;
}


