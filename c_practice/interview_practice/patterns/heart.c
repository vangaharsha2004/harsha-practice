#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=n/2+1;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++){
			printf("*");
		}
		for(int j=1;j<=2*n-2*i-1;j++){
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++){
			if(j==1 && i==n){
				continue;
			}
			else{
                        	printf("*");
			}
                }
		printf("\n");
	}
	for(int i=1;i<=n+2;i++){

	}
	return 0;
}
