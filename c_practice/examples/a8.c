#include<stdio.h>
int main(){
    int a[3][3],b[3][3],s[3][3];
    int (*p)[3]=a;
    int (*q)[3]=b;
    int (*r)[3]=s;
    
    printf("enter the first elements:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",(*(p+i)+j));
        }
        printf("\n");
    }
    printf("enter the second elements:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",(*(q+i)+j));
        }
        printf("\n");
    }
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(r+i)+j)= *(*(p+i)+j) + *(*(q+i)+j);
        }
    }
    printf("the sum of the two matrices is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(r+i)+j));
        }
        printf("\n");
    }
    return 0;
}
