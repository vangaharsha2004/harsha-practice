#include<stdio.h>
int main(){
    char a[20];
    char b[20];
    
    char *ptr1=a;
    char *ptr2=b;
    
    printf("enter the first string:");
    scanf("%s",a);
    
    printf("enter the second string:");
    scanf("%s",b);
    
    while(*ptr1!='\0' || *ptr2!='\0'){
        char temp = *ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        
        ptr1++;
        ptr2++;
    }
    printf("after swapping the first string : %s\n",a);
    printf("after swapping the second string : %s\n",b);
    
}
