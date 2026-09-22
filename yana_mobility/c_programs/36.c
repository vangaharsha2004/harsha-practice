#include<stdio.h>
int main(){

        int n;
        printf("enter the size:");
        scanf("%d",&n);

        int a[50];
        printf("enter the elements :");
        for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
        }

        int num;
        printf("enetr the number:");
        scanf("%d",&num);

        int l = 0;
        int r = n-1;
        int flag = 0;

        while(l<=r){
                int mid = (l+r)/2;
                if(a[mid] == num){
                        flag = 1;
                        break;
                }
                else if(num > a[mid]){
                        l = mid+1;
                }
                else if(num < a[mid]){
                        r = mid - 1;
                }
        }

        if(flag == 1){
                printf("found the number!\n");
        }
        else{
                printf("num not found!\n");
        }

        return 0;
}

