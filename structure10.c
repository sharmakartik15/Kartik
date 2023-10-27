#include <stdio.h>
int n;
struct salary
{
    char name[20];
    int acc_n;
    int balance;
} s[100];

void customers(int i)
{
    for (i = 0; i < n; i++)
    {
        if (s[i].balance <= 200)
        {
            printf("Customers with balance less than $200:\n%s", s[i].name);
        }
    }
}

void increment(int i)
{
    for(i=0;i<n;i++)
    {
        if(s[i].balance>1000)
        {
            s[i].balance+=100;
            printf("\nIncremented balance with name:\n%s\n%d",s[i].name,s[i].balance);
        }
        
    }
}

void main()
{
    int i;

    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    if (n <= 10)
    {
        printf("The input should be of more than 10 customers!");
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter customer's name: ");
        scanf("%s", s[i].name);

        printf("Enter customer's account number: ");
        scanf("%d", &s[i].acc_n);

        printf("Enter customer's balance: ");
        scanf("%d", &s[i].balance);
    }
    customers(i);
    increment(i);
}