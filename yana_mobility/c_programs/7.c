#include<stdio.h>
int main(){

	int telugu,hindi,english,maths,sceince,social;
	printf("enter the marks of subjects:\n");
	printf("Telugu : ");
	scanf("%d",&telugu);
	printf("Hindi : ");
	scanf("%d",&hindi);
	printf("English : ");
	scanf("%d",&english);
	printf("maths : ");
	scanf("%d",&maths);
	printf("Sceince : ");
	scanf("%d",&sceince);
	printf("Social : ");
	scanf("%d",&social);

	int total = telugu+hindi+english+maths+sceince+social;
	printf("total = %d\n",total);

	float percentage = (total/600)*100;
	printf("percentage = %.2f\n",percentage);
	
	printf("Grade = ");
	if(percentage>=0 && percentage<=25){
		printf(" F\n ");
	}
	else if(percentage>=25 && percentage<=45){
		printf(" E\n ");
	}
	else if(percentage>=45 && percentage<=65){
		printf(" D\n ");
	}
	else if(percentage>=65 && percentage<=80){
		printf(" C\n ");
	}
	else if(percentage>=80 && percentage<=90){
		printf(" B\n ");
	}
	else if(percentage>=90 && percentage<=100){
		printf(" A\n ");
	}

	return 0;
}
