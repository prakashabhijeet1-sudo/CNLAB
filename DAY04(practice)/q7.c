//sum of most significant byte of 5 intenger using strucutre and pointer

#include <stdio.h>
struct Number
{
    unsigned int num;
};
int main()
{
    struct Number n[5];
    struct Number *ptr;
    unsigned int sum = 0;
    int i;
    ptr = n;
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%u", &(ptr + i)->num);
    }
    for (i = 0; i < 5; i++)
    {
        unsigned char *p;
        p = (unsigned char *)&((ptr + i)->num);

        /* MSB for a 32-bit integer on a little-endian system */
        sum += p[3];
    }
    printf("Sum of Most Significant Bytes = %u\n", sum);
    return 0;
}