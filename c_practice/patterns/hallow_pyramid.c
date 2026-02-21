#include<stdio.h>
int main(){

        int n;
        printf("enter the number:");
        scanf("%d",&n);

        for(int i=1;i<=n;i++){
                for(int j=n-i;j>=1;j--){
                        printf("  ");
                }
                for(int j=1;j<=2*i-1;j++){
			if(j==1||i==n||j==2*i-1)
                        	printf("* ");
			else
				printf("  ");
                }
                printf("\n");
        }

        return 0;
}

