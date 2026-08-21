//Insert a Byte at a Given Position

#include <stdio.h>
int main()
{
    unsigned char arr[100];
    int n, pos, i;
    unsigned char value;
    printf("Enter number of bytes: ");
    scanf("%d", &n);
    printf("Enter bytes:\n");
    for (i = 0; i < n; i++)
        scanf("%hhu", &arr[i]);
    printf("Enter byte to insert: ");
    scanf("%hhu", &value);
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid position\n");
        return 0;
    }
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%u ", arr[i]);
    return 0;
}