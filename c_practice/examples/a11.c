#include<stdio.h>
int main(){
    int a[7];
    printf("enter the elements in an array:");
    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("the second largest number %d",a[1]);
    return 0;
}
