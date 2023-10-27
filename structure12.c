#include<stdio.h>
struct company
{
    char name[20];
    int salary;
    int hours;
}s[2];

void work_hours(int i)
{
    for(i=0;i<2;i++)
    {
        if(s[i].hours>=8)
        {
            s[i].salary+=50;
        }
        printf("\nName and salary of employee %d:\n%s\n%d",i+1,s[i].name,s[i].salary);
    }
}

void main()
{
    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter employee's name: ");
        scanf("%s",s[i].name);

        printf("Enter employee's salary: ");
        scanf("%d",&s[i].salary);

        printf("Enter employee's hours of work per day: ");
        scanf("%d",&s[i].hours);
    }
    work_hours(i);
}