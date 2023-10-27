#include <stdio.h>
int n;
struct student
{
    int roll;
    char name[20];
    int age;
    char address[50];
} s[100];

int display(int i)
{
    for (i = 0; i < n; i++)
    {
        if (s[i].roll % 2 == 0)
        {
            printf("%s\n", s[i].name);
        }
    }
}
int rollN(int i, int rollNum)
{
    for (i = 0; i < n; i++)
    {
        if (s[i].roll == rollNum)
        {
            printf("Student details with roll no.: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            printf("Address: %s\n", s[i].address);
            break;
        }
        else
        {
            printf("Roll number not found!");
        }
    }
}

void main()
{
    int i, rollNum;

    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    if (n <= 10)
    {
        printf("Input should be more than of 10 students!\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter student's roll no.: ");
        scanf("%d", &s[i].roll);

        printf("Enter student's name: ");
        scanf("%s", s[i].name);

        printf("Enter student's age(between 11 and 14): ");
        scanf("%d", &s[i].age);
        if (s[i].age < 11 || s[i].age > 14)
        {
            printf("Age should be between 11 and 14!");
            break;
        }
        printf("Enter student's address: ");
        scanf("%s", s[i].address);
    }

    printf("Enter the roll number to be searched: ");
    scanf("%d", &rollNum);
    display(i);
    rollN(i, rollNum);
}
