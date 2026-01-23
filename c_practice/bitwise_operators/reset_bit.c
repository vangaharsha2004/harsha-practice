#include<stdio.h>
#include<stdint.h>
int main(){
        uint8_t num;
        printf("enter the number:");
        scanf("%hhu",&num);

        int n;
        printf("enter the number want to set:");
        scanf("%d",&n);

        num = num & ~(1<<n);

        printf("the number after the bit is reset: %hhu\n",num);
        return 0;
}

