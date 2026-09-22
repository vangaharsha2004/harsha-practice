#include<stdio.h>
int main(){
        
        char ch[20];
        printf("enter the string:");
        scanf("%s",ch);
        
        for(int i=0;ch[i]!='\0';i++){
                if(ch[i]>='a' && ch[i]<='z'){
                        ch[i] = ch[i] - 32;
                }       
        }       
        
        printf("after converting to upper case %s\n",ch);
        return 0;
}       

