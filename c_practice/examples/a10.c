#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    
    int temp=1;
    while(temp<n){
        temp=temp*2;
    }
    if(temp==n){
        printf("it is power of 2");
    }
    else{
        printf("it is not power of 2");
    }
    return 0;
}
