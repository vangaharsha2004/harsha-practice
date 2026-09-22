#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p;

    //malloc

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\nEnter %d elements using malloc:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements stored using malloc:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    //calloc

    int *arr1 = (int *)calloc(n, sizeof(int));

    if(arr1 == NULL)
    {
        printf("Memory allocation failed\n");
        free(arr);
        return 1;
    }

    printf("\nElements allocated using calloc:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    //realloc

    printf("\nEnter new size: ");
    scanf("%d", &p);

    int *temp = (int *)realloc(arr, p * sizeof(int));

    if(temp == NULL)
    {
        printf("Reallocation failed\n");
        free(arr);
        free(arr1);
        return 1;
    }

    arr = temp;

    printf("Enter additional elements if required:\n");

    for(int i = n; i < p; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements after realloc:\n");

    for(int i = 0; i < p; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    //free

    free(arr);
    free(arr1);

    arr = NULL;
    arr1 = NULL;

    printf("\nMemory freed successfully\n");

    return 0;
}
