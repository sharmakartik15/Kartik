#include <stdio.h>
struct student
{
    int r;
    char name[20];
    float chem_m, maths_m, phy_m;
} s[5];

void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the roll number: ");
        scanf("%d", &s[i].r);

        printf("Enter the name: ");
        scanf("%s", s[i].name);

        printf("Enter the chemstry marks: ");
        scanf("%f", &s[i].chem_m);

        printf("Enter the maths marks: ");
        scanf("%f", &s[i].maths_m);

        printf("Enter the physics marks: ");
        scanf("%f", &s[i].phy_m);
    }

    for (i = 0; i < 5; i++)
    {
        float per = (s[i].chem_m + s[i].maths_m + s[i].phy_m) / 3;
        printf("Percentage of %d is %.2f\n", s[i].name, per);
    }
}