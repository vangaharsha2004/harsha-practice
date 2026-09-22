#include<stdio.h>
void transpose_matrix(int arr[][20],int t[][20],int m,int n){

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			t[j][i] = arr[i][j];
		}
	}
}

int main(){

	int m,n;
	printf("enter rows and coloumns: ");
	scanf("%d%d",&m,&n);

	int arr[20][20],t[20][20];
	printf("enter elemnts: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	transpose_matrix(arr,t,m,n);

	printf("transpose of matrix:\n");

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}

	return 0;
}
