#include<stdio.h>
int main(){
    char a[20],b[20];
    char *ptr1=a;
    char *ptr2=b;
    
    printf("enter the 1st string:");
    scanf("%s",a);
    
   printf("enter the 2nd string:");
   scanf("%s",b);
   
   while(*ptr1!='\0'){
       if(*ptr1==*ptr2){
           ptr1++;
           ptr2++;
       }
       else{
           printf("the two strings are not equal\n");
           return 0;
       }
   }
   printf("the two strings are equal\n");
   return 0;
}
