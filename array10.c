#include<stdio.h>
void main()
{
    int a[50],b[50],c[50],n1,n2,i,j,k=0;

    printf("Enter the size of set A: ");
    scanf("%d",&n1);

    printf("Enter the size of set B: ");
    scanf("%d",&n2);



    printf("Enter elements of set A: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of set B: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }

    printf("Intersection set of both sets is:\n{");
    for(i=0;i<k;i++)
    {
        printf(" %d ",c[i]);
    }
    printf("}");
}