 #include<stdio.h>
int main(){
	float principal,time,rate,si;

	printf("enter principal:");
	scanf("%f",&principal);

	printf("enter the rate:");
	scanf("%f",&rate);

	printf("enter the time:");
	scanf("%f",&time);

	si = (principal*rate*time)/100;

	printf("the simple intrest si is %.2f",si);
	return 0;
}
