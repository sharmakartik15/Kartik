#include <stdio.h>
int stack[100], top = -1, n, x, y = 0, c;
void push();
void pop();
void display();
void main()
{

    printf("Enter the capacity: ");
    scanf("%d", &n);

    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit");
            break;
        }
    }
}
void push()
{
    if (top >= n - 1)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &x);

        top += 1;
        stack[top] = x;
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
void pop()
{
    if (top <= -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Enter the element to be deleted: ");
        scanf("%d", &x);
        y = stack[top];
        top -= 1;
    }
}