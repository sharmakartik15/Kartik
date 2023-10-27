#include<stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
}s[2];

void main()
{
    int i,sum_h=0,sum_m=0,sum_s=0;

    for(i=0;i<2;i++)
    {
        printf("Enter hours: ");
        scanf("%d",&s[i].hours);

        sum_h+=s[i].hours;

        printf("Enter minutes: ");
        scanf("%d",&s[i].minutes);

        sum_m+=s[i].minutes;

        printf("Enter seconds: ");
        scanf("%d",&s[i].seconds);

        sum_s+=s[i].seconds;
    }

    if(sum_s>=60)
    {
        sum_s-=60;
        sum_m++;
    }
    if(sum_m>=60)
    {
        sum_m-=60;
        sum_h++;
    }

    printf("Time: %d:%d:%d",sum_h,sum_m,sum_s);
}