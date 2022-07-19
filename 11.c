// wap to display prime number between 1 to 100.
#include <stdio.h>
int main()
{
    int i, j, flag = 0;
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
        }
        flag = 0;
    }
}
