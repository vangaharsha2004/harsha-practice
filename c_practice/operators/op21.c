#include<stdio.h>
int main(){
	int T,H,E,M,S;
	float total,average,percentage;

	printf("enter the marks of 5 subjects:");
	scanf("%d %d %d %d %d",&T,&H,&E,&M,&S);

	total = T+H+E+M+S;
	average = total/5;
	percentage = (total/500)*100;

	printf("the total marks of a student is %.2f\n",total);
	printf("the average of a student is %.2f\n",average);
	printf("the percentage of a student is %.2f\n",percentage);
	return 0;
}
