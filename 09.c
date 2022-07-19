#include <stdio.h>
int main()
{
    int mat[2][3];
    printf("enter 2*3 matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("the 2*3 matrix is shown below: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}