#include <stdio.h>

int main()
{
    int arr[50],n,i,j,temp; 

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    i = 0;
    j = n - 1;
    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i++;
        j--;
    }


    printf("\nReversed array : ");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}