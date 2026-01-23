#include<stdio.h>
#include<math.h>
int main(){
        double x;
        double result;
         printf("enter the number:");
         scanf("%lf",&x);

         result=pow(x,0.5);

         printf("the square root is %.2lf",result);
         return 0;
}
