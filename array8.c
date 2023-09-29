#include <stdio.h>
void main()
{
    int a[50], b[50], c[100], n1, n2, n, k = 0, i;

    printf("Enter the size of array 1: ");
    scanf("%d", &n1);

    printf("Enter the size of array 2: ");
    scanf("%d", &n2);

    n = n1 + n2;

    printf("Enter elements of array 1: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    k = n1;

    printf("Enter the elements of array 2: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }

    printf("Sorted array after merging: ");

    

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", c[i]);
    }
}