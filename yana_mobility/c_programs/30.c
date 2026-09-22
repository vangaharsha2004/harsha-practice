#include<stdio.h>
int main(){

	int m,n,p,q;
	printf("enter the rows and coloumns of first matrix : ");
	scanf("%d%d",&m,&n);

	printf("enter the rows and coloumns of second matrix : ");
        scanf("%d%d",&p,&q);

	if(m==p && n==q){
		int a[10][10],b[10][10],sum[10][10];
		printf("enter the elements of first matrix:\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}

		printf("enter the elements of second  matrix:\n");
                for(int i=0;i<p;i++){
                        for(int j=0;j<q;j++){
                                scanf("%d",&b[i][j]);
                        }       
                }

		 for(int i=0;i<m;i++){
                        for(int j=0;j<q;j++){
                                sum[i][j] = a[i][j] + b[i][j];
                        }
                }

		printf("the sum of the matrix are :\n");
		for(int i=0;i<p;i++){
                        for(int j=0;j<q;j++){
                                printf("%d ",sum[i][j]);
                        }
			printf("\n");
                }
	}
	else{
		printf("Invalid\n");
	}
	return 0;
}
