//Rotate Bits of an 8-bit Number
#include <stdio.h>

int main()
{
    unsigned int n = 0;
    int bit, i, r;
    printf("Enter 8-bit binary number: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%1d", &bit);
        n = (n << 1) | bit;
    }
    printf("Enter number of positions: ");
    scanf("%d", &r);
    r = r % 8;
    n = ((n << r) | (n >> (8 - r))) & 0xFF;
    printf("After left rotation: ");
    for (i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
    return 0;
}