#include<stdio.h>

int search(int arr[],int n,int num){
        for(int i=0;i<n;i++){
                if(arr[i] == num){
                        return 1;
                }
        }
        return 0;
}
int main(){

        int n;
        printf("enetr the size:");
        scanf("%d",&n);

        int a[50];
        printf("enter the elements :");
        for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
        }

        int num;
        printf("enter the number you want to search: ");
        scanf("%d",&num);
        int flag = search(a,n,num);

         if(flag == 1){
                printf("the number is found!\n");
        }
        else{
                printf("the number is not found!\n");
        }

        return 0;
}
