#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k, add[10][10], sub[10][10];

    printf("enter the number of row: ");
    scanf("%d", &r);
    printf("enter the number of column: ");
    scanf("%d", &c);
    printf("enter the first matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    printf("addition of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    // for printing result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    printf("subtraction of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    // for printing result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}