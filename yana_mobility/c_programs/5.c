#include<stdio.h>

int pow1(int r,int digits){
    int fact = 1;
    for(int i=1;i<=digits;i++){
        fact = fact*r;
    }
    return fact;
}
int main(){
        
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        
        int temp = n;
        int digits = 0;
        while(temp){
                digits++;
                temp = temp/10;
        }       
        temp = n;
        
        int sum = 0;
        while(temp){
                int r=temp%10;
                sum = sum + pow1(r,digits);
                temp = temp/10;
        }       
        
        if(sum == n){
                printf("the number is armstrong\n");
        }       
        else{
                printf("the number is not an armstrong\n");
        }       
        
        return 0;
}       
