#include<stdio.h>
void main() {
    int a[50][50],b[50][50],c[50][50],m,n,p,q,i,j,k;

    printf("Enter the value of m and n: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of Matrix A: ");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the value of p and q: ");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of Matrix B: \n");

    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
