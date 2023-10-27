#include<stdio.h>
struct complex
{
    int real;
    int img;
}s[2];

void main()
{
    int i,sum_r=0,sum_i=0;

    for(i=0;i<2;i++)
    {
        printf("Enter the real part: ");
        scanf("%d",&s[i].real);

        sum_r+=s[i].real;

        printf("Enter the imaginary part: ");
        scanf("%d",&s[i].img);

        sum_i+=s[i].img;
    }

    printf("Sum: %d + %di",sum_r,sum_i);
}