#include<stdio.h>
int main(){
    int a[5],b[5];
    int *p=a;
    int *q=b;
    int temp;
    
    printf("enter the first array elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",p+i);
    }
    printf("enter the second array elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",q+i);
    }
    for(int i=0;i<5;i++){
        temp = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = temp;
    }
     printf("after swapping the first elements\n");
    for(int i=0;i<5;i++){
       printf("%d ",*(p+i));
    }
    printf("\n");
    printf("after swapping the second elements\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(q+i));
    }
    return 0;
}
