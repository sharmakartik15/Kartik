#include<stdio.h>
void main()
{
    int a[50],n,i,p,num;

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

    printf("\nEnter the position: ");
    scanf("%d",&p);

    printf("Enter the element to be inserted: ");
    scanf("%d",&num);

    n++;

    for(i=n-1;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    
    a[p-1]=num;

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}