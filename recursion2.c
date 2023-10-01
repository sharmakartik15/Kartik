#include<stdio.h>
int power(int A,int n)
{
    if(n==0)
    return 1;
    else
    return A*power(A,n-1);
}
void main()
{
    int A,n;
    printf("Enter the number and power: ");
    scanf("%d%d",&A,&n);
    printf("%d",power(A,n));
}
