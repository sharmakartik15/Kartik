#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
} s[2];

void main()
{
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("Enter the date: ");
        scanf("%d", &s[i].date);

        printf("Enter the month: ");
        scanf("%d", &s[i].month);

        printf("Enter the year: ");
        scanf("%d", &s[i].year);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 2; j++)
        {
            if (s[i].date == s[j].date && s[i].month == s[j].month && s[i].year == s[j].year)
            {
                printf("Dates are equal");
            }
            else
            {
                printf("Dates are not equal");
            }
        }
    }
}