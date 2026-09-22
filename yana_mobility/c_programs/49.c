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

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b, choice;

    int (*operation)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. addition\n2. subtraction\n3. multiplication\n4. division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            operation = add;
            break;

        case 2:
            operation = subtract;
            break;

        case 3:
            operation = multiply;
            break;

        case 4:
            operation = divide;
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    if(choice == 4 && b == 0)
    {
        printf("Division by zero is not possible\n");
        return 0;
    }

    printf("Result = %d\n", operation(a, b));

    return 0;
}
