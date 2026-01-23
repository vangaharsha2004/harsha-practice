#include<stdio.h>
int main(){
	int a;
	float f;
	double d;
	char ch;

	printf("enter the number:");
	scanf("%d",&a);
	printf("the integer value  is %d\n",a);

	printf("enter the number:\n");
	scanf("%f",&f);
	printf("the float value is %f\n",f);

	printf("enter the number:\n");
	scanf("%lf",&d);
	printf("the double value is %lf\n",d);

	printf("enter the character:\n");
        scanf(" %c",&ch);
        printf("the character is %c\n",ch);
	return 0;
}
	

