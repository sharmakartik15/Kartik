#include <stdio.h>
int sum = 0, rev;

int reverse(int num)
{
    if (num)
    {
        rev = num % 10;
        sum = sum * 10 + rev;
        reverse(num / 10);
    }
    else
        return sum;
}

void main()
{
    int num, revNum;

    printf("Enter the number to be reversed: ");
    scanf("%d",&num);
    
    revNum = reverse(num);
    printf("The number reversed: %d", revNum);
}