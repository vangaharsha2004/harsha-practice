#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}


void calculate(int (*operations[])(int, int), int size)
{
    int a = 10;
    int b = 5;

    for(int i = 0; i < size; i++)
    {
        printf("Result = %d\n", operations[i](a, b));
    }
}

int main()
{
    
    int (*operations[3])(int, int) =
    {
        add,
        subtract,
        multiply
    };

    
    calculate(operations, 3);

    return 0;
}
