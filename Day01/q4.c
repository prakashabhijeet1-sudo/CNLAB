// wap to demonstrate the structure and the acesss their memebers buy creating a structure tol hold dtetia;s like name , roll, and age
#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    char state[30];
    int age;
};
int main()
{
    struct student s;
    printf("enter name :\n");
    scanf("%s", s.name);
    printf("engter rioll number : \n");
    scanf("%d", &s.roll);
    printf("enter state :\n");
    scanf("%s", s.state);
    printf("entyer age: \n");
    scanf("%d", &s.age);
    printf("details::");
    printf("name :%s \n", s.name);
    printf("roll nuymber : %d \n", s.roll);
    printf("stste: %s \n", s.state);
    printf("age : %d \n ", s.age);
    return 0;
}