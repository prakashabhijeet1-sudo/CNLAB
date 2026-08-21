/*bits destuffing*/
#include<stdio.h>
#include<string.h>
int main()
{
    char stuffed[100];
    int i,count=0;
    printf("enteerr stuffed bits :\n");
    scanf("%s",stuffed);
    printf("after destuffing:\n");
   for ( i =0 ;i < strlen(stuffed);i++)
    {
        if(stuffed[i]=='1')
        {
            count++;
            printf("1");
        if(count==5)
        {
            i++;
            count=0;
        }
    }
    else{
        printf("0");
        count=0;
    }
}
return 0;
}