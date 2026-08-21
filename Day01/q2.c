//wap to find sum of numbers of array using malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i ,sum=0;
    int *arr;
    printf("enter the size of the array = \n");
    scanf("%d", &n);
    arr =(int *)malloc(n * sizeof(int));
    printf("enter the elments of array : \n");
    for(i = 0; i< n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for(i=0 ; i<n ;i++)
    {
        sum = sum+ arr[i];
    }
    printf("Sum = %d \n",sum);
    free(arr);
    return 0;
}