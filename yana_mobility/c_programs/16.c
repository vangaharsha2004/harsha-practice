#include<stdio.h>
int main(){

	int n;
	printf("enter a number to convert binary: ");
	scanf("%d",&n);

	int m=0;

	int arr[30];

	while(n){

		int r = n%2;
		arr[m] = r;

		n = n/2;
		m++;
	}

	for(int i=m-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
