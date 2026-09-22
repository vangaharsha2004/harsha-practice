#include<stdio.h>

int leap_year(int year){

	if((year%400==0)||(year%4==0 && year%100!=0)){
		return 1;
	}
	return 0;
}

int days_in_month(int month,int year){

	if(month == 2){
		if(leap_year(year)){
			return 29;
		}
		else{
			return 28;
		}
	}

	if(month == 4||month == 6||month == 9||month == 11){
		return 30;
	}
	else{
		return 31;
	}
}

void date_difference(int d1,int m1,int y1,int d2,int m2,int y2){

	int years = y2-y1;
	int months = m2-m1;
	int days = d2-d1;

	if(days<0){

		months--;
		int per_month = m2-1;
		int per_year = y2;

		if(per_month == 0){
			per_month = 12;
			per_year--;
		}

		days = days + days_in_month(per_month,per_year);
	}

	if(months<0){
		years--;
		months = months + 12;
	}

	printf("differnce = %d years, %d months, %d days\n",years,months,days);
}

int main(){

	int d1,m1,y1;
	int d2,m2,y2;

	printf("date 1 should be earlier than date 2\n");

	printf("enter date 1(dd mm yyyy): ");
	scanf("%d%d%d",&d1,&m1,&y1);

	printf("enter date 2(dd mm yyyy): ");
	scanf("%d%d%d",&d2,&m2,&y2);

	if(y1<y2||(y1==y2 && m1<m2)||(y1==y2 && m1==m2 && d1<d2)){

		date_difference(d1,m1,y1,d2,m2,y2);
	}
	else{
		printf("invalid dates. date 1 must be earlier than date 2\n");
	}
	return 0;
}
