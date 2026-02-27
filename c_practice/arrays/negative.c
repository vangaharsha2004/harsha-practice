#include<stdio.h>

int main(){

	int a[20];
	int n;

	printf("enter the size:");
	scanf("%d",&n);

	printf("enter the numbers:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("the negative numbers are:");
	for(int i=0;i<n;i++){
		if(a[i]<0){
			printf("%d ",a[i]);
		}
	}

	printf("\n");
	return 0;
}
