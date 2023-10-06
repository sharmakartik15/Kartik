#include <stdio.h>
struct student
{
    int r;
    char name[20];
    int age;
    int marks;
} s[2];

void main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter the roll number: ");
        scanf("%d", &s[i].r);

        printf("Enter the name: ");
        scanf("%s", s[i].name);

        printf("Enter the age: ");
        scanf("%d", &s[i].age);

        printf("Enter the marks: ");
        scanf("%d", &s[i].marks);
    }
    for (i = 0; i < 2; i++)
    {
        if (s[i].r == 1)
        {
            printf("Details are: %d %s %d %d", s[i].r, s[i].name, s[i].age, s[i].marks);
        }
    }
}