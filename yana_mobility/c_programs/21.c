#include<stdio.h>
int main(){

	int total_days;
	int months,days;

	printf("enter no of days: ");
	scanf("%d",&total_days);

	months = total_days/30;
	days = total_days%30;

	printf("%d days = %d months and %d days\n",total_days,months,days);
	return 0;
}
