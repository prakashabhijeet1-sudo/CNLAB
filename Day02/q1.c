// WAP to extract byte from an interger (hexadecimal, here we will take an integer valiue hexdecimal format  nd then extract alll four bytes in four differcnt variables)
#include<stdio.h>
typedef unsigned char BYTE;
int main()
{
    unsigned int value=0x11223344;
    BYTE a,b,c,d;
    a=(value&0xFF);
    b=((value>>8)&0xFF);
    c=((value>>16)&0xFF);
    d=((value>>24)&0xFF);
    printf("a=%02x \n",a);
    printf("b=%02x \n",b);
    printf("c=%02x \n",c);
    printf("d=%02x \n",d);
    return 0;
}