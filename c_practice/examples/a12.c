#include<stdio.h>
int main(){
    int n;
    printf("enter the size of a array:");
    scanf("%d",&n);
    
    int a[n];
    printf("enter the elements in an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the negative numbers are\n");
    for(int i=0;i<n;i++){
        if(a[i]<0){
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
