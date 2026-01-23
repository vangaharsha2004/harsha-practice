#include<stdio.h>
int main(){
    char a[20];
    char b[20];
    
    char *ptr1=a;
    char *ptr2=b;
    
    printf("enter the first string:");
    scanf("%s",a);
    
    printf("enter the second  string:");
    scanf("%s",b);
    
    while(*ptr1!='\0'){
        ptr1++;
    }
        
    while(*ptr2!='\0'){
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    printf("the overall string: %s",a);
    return 0;
}
