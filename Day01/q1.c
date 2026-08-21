//write a program to demosntarte using call by refrence and call by value
#include<stdio.h>
void callbyvalue(int a ,int b)
{
    int temp = a;
    a=b;
    b =temp;
    printf("inside call by value x = %d and y= %d \n" , a,b);
}
void callbyrefrence(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b =temp;
}
int main()
{
    int x =10 , y =20;
    callbyvalue(x,y);
    printf("after call by value x = %d and y= %d \n" , x,y);
    callbyrefrence(&x,&y);
    printf("after call by refrence x = %d and y = %d ",x,y);
    return 0;
}