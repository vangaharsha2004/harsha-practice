#include<stdio.h>

int main(){

	int a[20];
	int n,sum=0;

	printf("enter the size:");
	scanf("%d",&n);

	printf("enter the numbers:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++){
		sum+=a[i];
	}

	printf("sum of the array %d\n ",sum);
	return 0;
}
