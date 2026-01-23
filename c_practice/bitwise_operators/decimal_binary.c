#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);

	int j=0;

	int a[20];

	while(n>0){
		a[j]= n&1;
		j++;
		n = n>>1;
	}
	
	printf("the binary number is ");
	for(int i=j-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
