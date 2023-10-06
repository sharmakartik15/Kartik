#include<stdio.h>
int sum=0,d;

int sumFun(int n)
{
    if(n)
    {
        d=n%10;
        sum=sum+d;
        sumFun(n/10);
    }
    else
    {
        return sum;
    }
}
void main()
{
    int n,sumDigit;

    printf("Enter the number: ");
    scanf("%d",&n);

    sumDigit=sumFun(n);

    printf("Sum of digits is %d",sumDigit);
}