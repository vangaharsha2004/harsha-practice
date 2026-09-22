#include<stdio.h>
int main(){

	int a,b;
	printf("enter the two numbers: ");
	scanf("%d %d",&a,&b);
	
	int choice;
	printf("1. Addition \n2. Subtraction \n3. multiplication \n4. Division \n");
	printf("enter your choice : ");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			printf("%d\n",a+b);
			break;

		case 2:
			printf("%d\n",a-b);
			break;

		case 3:
			 printf("%d\n",a*b);
                         break;

		case 4:
			 printf("%.2f\n",(float)a/b);
                         break;

		default:
			 printf("Invalid choice\n");

	}

	return 0;
}
