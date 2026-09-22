#include<stdio.h>
#include<string.h>

int main(){

        char s[100];
        printf("enter the string :");
        fgets(s,100,stdin);
        s[strcspn(s,"\n")] = '\0';

        int n = strlen(s);

        int i = 0;
        int j = n-1;

        while(i<j){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
        }

        printf("after reversing the sentense : %s\n");
        return 0;
}
