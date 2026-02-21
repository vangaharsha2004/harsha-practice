#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);

	for(int i=1;i<=2*n-1;i++){
		if(i==n){
			for(int j=1;j<=n*2-1;j++){
				printf("+");
			}
		}
		else{
			for(int j=1;j<n;j++){
				printf(" ");
			}
			printf("+");
		}
		printf("\n");
	}

	return 0;
}
