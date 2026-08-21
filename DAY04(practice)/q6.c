//resize an array using realloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, newSize, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter new size: ");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    if (newSize > n)
    {
        printf("Enter additional elements:\n");

        for (i = n; i < newSize; i++)
            scanf("%d", &arr[i]);
    }

    printf("Array after resizing:\n");

    for (i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}