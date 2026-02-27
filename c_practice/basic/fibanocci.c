#include<stdio.h>
int main(){
    int limit;
    printf("enetr the limit:");
    scanf("%d",&limit);
    
    int a=1,b=1,c;
    for(int i=0;a<limit;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}
