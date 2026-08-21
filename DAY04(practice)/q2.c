//Count Number of 1s and 0s in a Byte

#include <stdio.h>
int main()
{
    unsigned char n;
    int ones = 0, zeros = 0;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &n);
    for (int i = 0; i < 8; i++)
    {
        if (n & (1 << i))
            ones++;
        else
            zeros++;
    }
    printf("Number of 1s = %d\n", ones);
    printf("Number of 0s = %d\n", zeros);
    return 0;
}