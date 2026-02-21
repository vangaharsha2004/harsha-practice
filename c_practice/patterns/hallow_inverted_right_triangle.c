#include<stdio.h>
int main(){

        int n;
        printf("enter the number:");
        scanf("%d",&n);

        for(int i=n;i>=1;i--){
                for(int j=1;j<=i;j++){
			if(j==1||i==n||j==i)
                        	printf("* ");
			else
				printf("  ");
                }
                printf("\n");
        }

        return 0;
}

