#include<stdio.h>
int main(){
    char a[20];
    char *ptr=a;
    int len=0;
    
    printf("enter the string:");
    scanf("%s",a);
    
    while(*ptr!='\0'){
        ptr++;
        len++;
    }
    ptr--;
    printf("the reverse of the string:");
    for(int i=len-1;i>=0;i--){
        printf("%c",*ptr);
        ptr--;
    }
    return 0;
}
