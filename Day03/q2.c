// byte destuffing
#include <string.h>
#include <stdio.h>
int main()
{
    char frame[50][50];
    int i, n;
    printf("Enter no. of strings :  ");
    scanf("%d", &n);
    printf(" enteer the stuffed frame \n");
    for (i = 0; i < n; i++)
        scanf("%s", frame[i]);
    printf("after destuffing :");
    for (i = 1; i < n -1; i++)
    {
        if (strcmp(frame[i], "esc") == 0)
        {
            i++;
            printf("%s ", frame[i]);
        }
        else
        {
            printf("%s ", frame[i]);
        }
    }
    printf("\n");
    return 0;
}