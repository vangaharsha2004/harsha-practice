#include<stdio.h>
int main(){
        int a,b;
        printf("enter the first number:");
        scanf("%d",&a);
        printf("enter the second number:");
        scanf("%d",&b);
        printf("the addition of two numbers %d + %d = %d\n",a,b,a+b);
	printf("the subtraction of two numbers %d - %d = %d\n",a,b,a-b);
	printf("the multiplication of two numbers %d * %d = %d\n",a,b,a*b);
	printf("the division of two numbers %d / %d = %d\n",a,b,a/b);
	printf("the modulus of two numbers %d %% %d = %d\n",a,b,a%b);
        return 0;
}
