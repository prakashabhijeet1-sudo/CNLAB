//WAP to convert little endian to big endian nd vice versa
#include<stdio.h>
unsigned int convertendian(unsigned int num)
{
    return((num>>24)&0x000000FF)|((num>>8)&0x0000FF00)|((num<<8)&0x00FF0000)|((num<<24)&0xFF000000);   
}
int main()
{
    unsigned int num, result;
    printf("Enter hexadecimal number\n");
    scanf("%x",&num);
    result =convertendian(num);
    printf(" the original number :%x \n",num);
    printf("converted number : %x \n", result);
    return 0;
}