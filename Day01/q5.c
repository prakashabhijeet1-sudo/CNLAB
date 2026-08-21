//wap to acess the structure member using structure ponyer and the dot operatorby creating a structutre subject withb name ,id ,duration,ankd type
#include<stdio.h>
struct subject
{
    char nanme[30];
    int id;
    int duration;
    char type[20];
};
int main()
{
    struct subject s;
    struct subject *ptr=&s;
    printf("enter subjectr name: \n");
    scanf("%s",s.nanme);
    printf("enter subjectr id : \n");
    scanf("%d",&s.id);
    printf("neter duration : \n");
    scanf("%d", &s.duration);
    printf("enter typoe : \n");
    scanf("%s", s.type);
    printf("name : %s \n",s.nanme);
    printf(" id: %d \n" , s.id);
    printf("duration %d \n ",s.duration);
    printf("type : %s\n",s.type);
    printf("arrow");
    printf("name : %s \n",ptr->nanme);
    printf("id: %d \n", ptr->id);
    printf("duration: %d \n", ptr->duration);
    printf("type: %s \n",ptr->type);
    return 0;
}