#include<stdio.h>

void matrix_multiplication(int m,int n,int p,int q){

	int a[10][10],b[10][10],c[10][10];
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

		int sum;

		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				sum = 0;
				for(int k=0;k<n;k++){
					sum = sum+a[i][k]*b[k][j];
				}
				c[i][j] = sum;
			}
		}

		printf("the multiplication  of the matrix are :\n");
                for(int i=0;i<m;i++){
                        for(int j=0;j<q;j++){
                                printf("%d ",c[i][j]);
                        }
                        printf("\n");
                }
}

int main(){

	int m,n,p,q;
        printf("enter the rows and coloumns of first matrix : ");
        scanf("%d%d",&m,&n);

        printf("enter the rows and coloumns of second matrix : ");
        scanf("%d%d",&p,&q);

	if(n==p){
		matrix_multiplication(m,n,p,q);
	}
	else{
		printf("invalid\n");
	}
	return 0;
}
