#include <stdio.h>
struct complex
{
    int real;
    int img;
} s[2];
void main()
{
    int i,sum_r=0,sum_i=0,diff_r=0,diff_i=0,mul_r=0,mul_i=0;

    for (i = 0; i < 2; i++)
    {
        printf("Enter the real part: ");
        scanf("%d", &s[i].real);

        printf("Enter the imaginary part: ");
        scanf("%d", &s[i].img);
    }

    for(i=0;i<2;i++)
    {
        sum_r+=s[i].real;
        sum_i+=s[i].img;

        diff_r-=s[i].real;
        diff_i-=s[i].img;

        mul_r=(s[0].real*s[1].real)-(s[0].img*s[1].img);
        mul_i=(s[0].real*s[1].img)+(s[0].img*s[1].real);

        if(i==0)
        {
            diff_r=diff_r*(-1);
            diff_i=diff_i*(-1);
        }
    }
    printf("Sum: %d + %di\n", sum_r, sum_i);
    printf("Difference: %d + %di\n",diff_r,diff_i);
    printf("Multiplication: %d + %di",mul_r,mul_i);

}