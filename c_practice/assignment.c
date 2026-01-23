#include <stdio.h>

int main() {
    int a;
    a = 10;
    printf("After = : a = %d\n", a);
    a += 5;
    printf("After += : a = %d\n", a);
    a -= 3;
    printf("After -= : a = %d\n", a);
    a *= 2;
    printf("After *= : a = %d\n", a);
    a /= 4;
    printf("After /= : a = %d\n", a);
    a %= 3;
    printf("After %%= : a = %d\n", a); 
    a <<= 2;
    printf("After <<= : a = %d\n", a);
    a >>= 1;
    printf("After >>= : a = %d\n", a);
    return 0;
}

