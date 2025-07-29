#include<stdio.h>
int main(){
        float l,b;
        float area;
        printf("enter the length of the rectangle in cm:");
        scanf("%f",&l);
        printf("enter the breadth of the rectangle in cm:");
        scanf("%f",&b);
        area=l*b;
        printf("the area of the rectangle in cm is %f\n",area);
        return 0;
}
