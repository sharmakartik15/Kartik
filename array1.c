#include<stdio.h>
void main()
{
    int a[50],n,i;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enteres array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}