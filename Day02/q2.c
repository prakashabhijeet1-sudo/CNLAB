// WAP a program tp chcek whteerre ur program is little endian or big endian
#include<stdio.h>
int main()
{
    unsigned int x=0x76513210;
    char *c=(char *)&x;
    printf("*c is : 0x %x \n",*c);
    if(*c == 0x10)
    {
        printf(" underlying architecture is little endian");
    }
    else{
        printf("underlying architecure is big endian");
    }
    return 0;
}