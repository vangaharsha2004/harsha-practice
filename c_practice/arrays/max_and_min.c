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

	int max = a[0];
	int min = a[0];

	for(int i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
		else if(a[i]<min){
			min = a[i];
		}
	}

	printf("MAX = %d , MIN = %d\n",max,min);
	return 0;
}
