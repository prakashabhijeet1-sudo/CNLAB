//Reverse the Bits of a Byte

#include <stdio.h>
int main()
{
    unsigned char n, rev = 0;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &n);
    for (int i = 0; i < 8; i++)
    {
        rev = (rev << 1) | (n & 1);
        n = n >> 1;
    }
    printf("Reversed byte = %u\n", rev);
    return 0;
}