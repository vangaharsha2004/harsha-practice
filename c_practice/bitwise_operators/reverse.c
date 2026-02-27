#include<stdio.h>
#include<stdint.h>

int main(){
    
    int8_t a = 4;
    int8_t rev = 0;
    
    for(int i=0;i<4;i++){
        rev = rev<<1;
        rev = rev|(a&1);
        a = a>>1;
    }
    
    printf("%d\n",rev);
    return 0;
}
