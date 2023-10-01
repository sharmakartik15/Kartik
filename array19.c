#include<stdio.h>
void main()
{
    int a[50][50],t[50][50],m,n,i,j;

    printf("Enter size of the matrix: ");
    scanf("%d%d",&m,&n);

    printf("Enter the elements of the matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("Original marix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}