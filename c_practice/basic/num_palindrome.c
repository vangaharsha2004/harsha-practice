#include<stdio.h>
int main(){
    
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    
    int temp =a,sum =0;
    while(a>0){
        int r = a%10;
        sum = sum*10 + r;
        a = a/10;
    }
    if(temp == sum){
        printf("the number is palindrome\n");
    }
    else{
        printf("the number is not palindrome\n");
    }
}
