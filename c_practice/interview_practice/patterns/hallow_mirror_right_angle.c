#include<stdio.h>

int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			if(i==1||i==j||i==n||j==1){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}
