//write a program in c using structure nd pointer to enter student roll number name nd marks of 5 subject and take atleast 5 student data display every student gpa nd grade
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks[5];
    float total;
    float percentage;
    float gpa;
    char grade;
};
int main()
{
    struct Student s[5];
    struct Student *ptr = s;
    int i, j;
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &(ptr + i)->roll);
        printf("Enter Name: ");
        scanf("%s", (ptr + i)->name);
        (ptr + i)->total = 0;
        printf("Enter Marks of 5 Subjects:\n");
        for(j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%f", &((ptr + i)->marks[j]));
            (ptr + i)->total += (ptr + i)->marks[j];
        }
        (ptr + i)->percentage = (ptr + i)->total / 5;
        (ptr + i)->gpa = (ptr + i)->percentage / 10;
        if((ptr + i)->percentage >= 90)
         (ptr + i)->grade = 'A';
        else if((ptr + i)->percentage >= 80)
        (ptr + i)->grade = 'B';
        else if((ptr + i)->percentage >= 70)
         (ptr + i)->grade = 'C';
        else if((ptr + i)->percentage >= 60)
         (ptr + i)->grade = 'D';
         else
         (ptr + i)->grade = 'F';
    }
    printf("\n STUDENT DETAILS\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", (ptr + i)->roll);
        printf("Name        : %s\n", (ptr + i)->name);
        printf("Marks       : ");
        for(j = 0; j < 5; j++)
        {
            printf("%.2f ", (ptr + i)->marks[j]);
        }
        printf("\nTotal       : %.2f", (ptr + i)->total);
        printf("\nPercentage  : %.2f%%", (ptr + i)->percentage);
        printf("\nGPA         : %.2f", (ptr + i)->gpa);
        printf("\nGrade       : %c\n", (ptr + i)->grade);
    }
    return 0;
}