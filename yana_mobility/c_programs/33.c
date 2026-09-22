#include<stdio.h>
int main(){

        int n;
        printf("enetr the size: ");
        scanf("%d",&n);

        int a[20];
        printf("enter the elements :");
        for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                        if(a[j]>a[j+1]){
                                int temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }

        printf("after sorting the elements:");
        for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
        return 0;
}

