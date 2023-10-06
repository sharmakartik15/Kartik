#include <stdio.h>
struct student
{
    int r;
    char Name[20];
    int age;
    char Address[20];
    float m;
} s[15];

void main()
{
    int i;

    for (i = 0; i<16; i++)
    {
        printf("Enter the details: ");
        scanf("%d%s%d%s%f/n",&s[i].r,s[i].Name,&s[i].age,s[i].Address,&s[i].m);
    }

    for(i=0;i<16;i++)
    {
        printf("Details are %d  %s  %d  %s  %f",s[i].r,s[i].Name,s[i].age,s[i].Address,s[i].m);
    }
}