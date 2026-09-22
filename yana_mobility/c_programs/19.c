#include<stdio.h>
#include<math.h>
int main(){

	int a,b,c;
	int discriminit;
	float root1,root2;
	float real,imaganary;

	printf("enter a,b and c : ");
	scanf("%d%d%d",&a,&b,&c);

	discriminit = (b*b)-(4*a*c);

	if(discriminit>0){

		root1 = (-b+sqrt(discriminit))/(2*a);
		root2 = (-b-sqrt(discriminit))/(2*a);

		printf("roots are real and different\n");
		printf("root1 = %.2f\n",root1);
		printf("root2 = %.2f\n",root2);
	}
	else if(discriminit==0){

		root1 = -b/(2*a);
		printf("roots are real and equal\n");
		printf("root1 = root2 = %.2f\n",root1);
	}
	else{
		real = -b/(2*a);
		imaganary = sqrt(-discriminit)/(2*a);
		printf("roots are complex\n");
		printf("root1 = %.2f + %.2fi\n",real,imaganary);
		printf("root2 = %.2f - %.2fi\n",real,imaganary);
	}
	return 0;
}
