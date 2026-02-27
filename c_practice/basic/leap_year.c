#include<stdio.h>
int main(){

	int n;
	printf("enter the year:");
	scanf("%d",&n);

	if((n%4==0 && n%100!=0)||n%400==0){
		printf("it is leap year\n");
	}
	else{
		printf("it is not leap year\n");
	}
	return 0;
}
