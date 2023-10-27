#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int age;
    char address[50];
    int marks;
}s[15];

void main()
{
    int i;

    
    for(i=0;i<15;i++)
    {
        printf("Enter the details: ");
        scanf("%d%s%d%s%d",&s[i].roll,s[i].name,&s[i].age,s[i].address,&s[i].marks);
    }

    for(i=0;i<15;i++)
    {
        printf("Details of the student are:\n")
        printf("%d\n%s\n%d\n%s\n%d\n",s[i].roll,s[i].name,s[i].age,s[i].address,s[i].marks);
    }
}