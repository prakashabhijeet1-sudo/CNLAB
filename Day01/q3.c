//wap to demonstratre the use of realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n,newsize,i;
    printf("intinal size = \n");
    scanf("%d", &n);
    arr=(int *)malloc(n * sizeof(int));
    printf(" enter elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter new size :\n");
    scanf("%d",&newsize);
    arr=(int *)realloc(arr,newsize *sizeof(int));
    if(newsize>n)
    {
        printf("enter new elemnts: \n");
        for(i=n;i<newsize;i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    printf("array elents : \n");
    for(i=0;i<newsize;i++)
    {
        printf("%d \n", arr[i]);
    }
    free(arr);
    return 0;
}