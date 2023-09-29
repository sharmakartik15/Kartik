#include<stdio.h>
void main()
{
    int a[50],n,N,i,sumN=0,sum=0,num;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

   

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    N=a[n-1];
    sumN = (N)*(N+1)/2;
    printf("\nSum of first n natural numbers: %d",sumN);
    
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }

    num = sumN-sum;
    printf("\nMissing number: %d",num);
}