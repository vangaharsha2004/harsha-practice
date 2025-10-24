#include<stdio.h>
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int even[5],odd[5];
    int e=0,o=0;
    
    for(int i=0;i<10;i++){
        if((a[i]%2)==0){
            even[e]=a[i];
            e++;
        }
        else{
            odd[o]=a[i];
            o++;
        }
    }
    printf("the even numbers are");
    for(int i=0;i<e;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("the odd numbers are");
    for(int i=0;i<o;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}
