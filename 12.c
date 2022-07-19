#include <stdio.h>
int main()
{
    int marks[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (marks[i] < marks[j])
            {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
}