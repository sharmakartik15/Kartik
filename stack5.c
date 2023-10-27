#include <stdio.h>
int stack[100], top = -1, n, d, base;
void push();
void pop();
void display();
void main()
{
    printf("Enter the decimal number: ");
    scanf("%d", &n);

    printf("Enter the base:");
    scanf("%d", &base);

    while (n > 0)
    {
        d = n % base;
        n = n / base;
        push(d);
    }
    display();
}
void push()
{
    if (top >= 99)
    {
        printf("Overflow");
    }
    else
    {

        top += 1;
        stack[top] = d;
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
}
