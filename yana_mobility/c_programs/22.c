#include<stdio.h>
int main(){

	int n;
	printf("enter the size: ");
	scanf("%d",&n);

	int arr[30];

	printf("enter the numbers: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	int max = arr[0];

	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}

	printf("the maxmuim number in an array %d\n",max);
	return 0;
}
