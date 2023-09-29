#include <stdio.h>
void main()
{
    int a[50], b[50], c[50], d[50], n1, n2, i, j, k = 0, l=0;

    printf("Enter the size of set A: ");
    scanf("%d", &n1);

    printf("Enter the size of set B: ");
    scanf("%d", &n2);

    printf("Enter elements of set A: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of set B: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (a[i] != b[j])
        {
            c[k] = a[i];
            k++;
        }
    }
    printf("Difference of set A - set B:\n{");
    for (i = 0; i < k; i++)
    {
        printf(" %d ", c[i]);
    }
    printf("}");

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                break;
            }
        }
        if (b[i] != a[j])
        {
            d[l] = b[i];
            l++;
        }
    }
    printf("\nDifference of set B - set A:\n{");
    for (i = 0; i < l; i++)
    {
        printf(" %d ", d[i]);
    }
    printf("}");
}