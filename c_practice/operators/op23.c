#include<stdio.h>
#include<math.h>
int main(){
        float principal,time,rate,ci;

        printf("enter principal:");
        scanf("%f",&principal);

        printf("enter the rate:");
        scanf("%f",&rate);

        printf("enter the time:");
        scanf("%f",&time);

        ci = principal*pow((1+rate/100),time)-principal;

        printf("the simple intrest si is %.2f",ci);
        return 0;
}
