#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],sum[50][50],m,n,i,j;

    printf("Enter the size of matrix: ");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of the matrix 1: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix 2: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}