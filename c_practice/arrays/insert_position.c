#include<stdio.h>
int main(){
    
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    
    int a[100];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int pos;
    printf("enter the position want to insert:");
    scanf("%d",&pos);
    
    int num;
    printf("enter the number want to insert:");
    scanf("%d",&num);
    for(int i=n;i>=pos;i--){
        a[i] = a[i-1];
    }
    n++;
    
    a[pos-1] = num;
    
    printf("after inserting the numbers\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
