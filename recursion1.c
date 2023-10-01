#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    else
        return  n* fact(n - 1);
}
void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
