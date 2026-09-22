#include<stdio.h>
int main(){

	int n;
	printf("enter how many numbers you want to average: ");
	scanf("%d",&n);

	int arr[30];
	printf("enter the numbers : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}

	float average = (float)sum/n;

	printf("average of the numbers %.2f\n",average);
	return 0;
}
