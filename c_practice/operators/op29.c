#include<stdio.h>
int main(){
	int a,b,hcf,lcm;
	printf("enter the numbers:");
	scanf("%d %d",&a,&b);

	 int min = (a>b)?a:b;
	for(int i=1;i<=min;i++){
		if(a%i==0 && b%i==0){
			hcf = i;
		}
	}
	lcm = (a*b)/hcf;

	printf("hcf is %d\n",hcf);
	printf("lcm is %d\n",lcm);
	return 0;
}
