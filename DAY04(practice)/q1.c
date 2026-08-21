//swap two byte in  a 32-bit integer
#include <stdio.h>
int main()
{
    unsigned int n;
    int p1, p2;
    unsigned int b1, b2;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &n);
    printf("Enter first byte position (0-3): ");
    scanf("%d", &p1);
    printf("Enter second byte position (0-3): ");
    scanf("%d", &p2);
    if (p1 < 0 || p1 > 3 || p2 < 0 || p2 > 3)
    {
        printf("Invalid byte position!\n");
        return 0;
    }
    b1 = (n >> (p1 * 8)) & 0xFF;
    b2 = (n >> (p2 * 8)) & 0xFF;
    n = n & ~(0xFF << (p1 * 8));
    n = n & ~(0xFF << (p2 * 8));
    n = n | (b1 << (p2 * 8));
    n = n | (b2 << (p1 * 8));
    printf("After swapping: %u\n", n);
    return 0;
}