#include<stdio.h>
int main(){
    char a[20];
     char *ptr=a;
    int len=0;
    
    printf("enter the string:");
    scanf("%[^/n]s",a);
    
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    printf("the length of given string is %d\n",len);
    return 0;
}
