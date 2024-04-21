#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr[5];
    int i = 0;
    int *ptr;
    int values[5];
    for (i = 0; i < 5; i++)
    {
        arr[i] = (int *)malloc(1 * sizeof(int));
    }

    for (i = 0; i < 5; i++)
    {
        printf("%p ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
    }
    for (i = 0; i < 5; i++)
    {
        *(arr[i]) = values[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *arr[i]);
    }
}