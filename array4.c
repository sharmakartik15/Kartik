#include<stdio.h>
void main()
{
    int a[50],n,i,p;

    printf("Enter the siz of an array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nEnter the position from where element is to be deleted: ");
    scanf("%d",&p);

    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("Updated array: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}