#include<stdio.h>

int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=n;i>=1;i--){
		for(int j=n-i;j>=1;j--){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
