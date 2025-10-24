#include<stdio.h>
int main(){
    char a[20],b[20];
    char *ptr1=a;
    char *ptr2=b;
    
    printf("enter the string:");
    scanf("%s",a);
    
    while(*ptr1!='\0'){
        *ptr2=*ptr1;
        ptr2++;
        ptr1++;
    }
    *ptr2='\0';
    
    printf("the copyed string is %s\n",b);
    return 0;
}
