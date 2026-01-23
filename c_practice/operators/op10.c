#include<stdio.h>
int main(){

	float days,years,weeks;

	printf("enter the number of days:");
	scanf("%f",&days);

	years = days/365;
	weeks = days/7;

	printf("the no.of are %f\n",years);
	printf("the no.of weeks are %f\n",weeks);
	return 0;
}
