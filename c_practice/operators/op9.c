#include<stdio.h>
int main(){
        float celsius,fahrenheit;

        printf("enter the fahrenheit:");
        scanf("%f",&fahrenheit);

        celsius = (fahrenheit-32)*5/9;

        printf("the celsius is %f\n",celsius);
        return 0;
}
