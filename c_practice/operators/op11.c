#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	double result;
	 printf("the value of x:");
	 scanf("%d",&x);

	 printf("enter the the value of power y:");
	 scanf("%d",&y);

	 result=pow(x,y);

	 printf("the equvalent value %.0lf",result);
	 return 0;
}
