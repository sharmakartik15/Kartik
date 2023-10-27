#include <stdio.h>
struct distance
{
    int feet;
    int inches;
} s[2];

void main()
{
    int i, sum_f = 0, sum_i = 0;

    for (i = 0; i < 2; i++)
    {
        printf("Enter the distance in feet: ");
        scanf("%d", &s[i].feet);
        sum_f += s[i].feet;

        printf("Enter the distance in inches: ");
        scanf("%d", &s[i].inches);
        sum_i += s[i].inches;
    }
    
    if (sum_i >= 12)
    {
        sum_i -= 12;
        sum_f++;
    }
    printf("Sum in feet is %d\n", sum_f);
    printf("Sum in inches is %d", sum_i);
}