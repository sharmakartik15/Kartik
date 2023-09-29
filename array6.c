#include<stdio.h>
void main()
{
    int a[50],n,i,j;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicated elements are: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            printf("\n%d",a[i]);
        }
    }
}