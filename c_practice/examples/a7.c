#include<stdio.h>

int main(){
	int n,r,sum = 0,fact=1;

	printf("enter the number:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		while(n>0){
			r=n%10;
			for(int j=r;j>=1;j++){
				fact = fact*j;
			}
			sum=sum+fact;
			n=n/10;
		}
		if(n==sum){
			printf("it is strong");
		}
		else{
			printf("it is not strong");
		}
	}
	return 0;
}
