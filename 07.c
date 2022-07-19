#include <stdio.h>
int main()
{
    int positiveNum = 0, negativeNum = 0, evenNum = 0, oddNum = 0;
    int enteredNum[25];
    for (int i = 0; i < 25; i++)
    {
        printf("Enter a num:");
        scanf("%d", &enteredNum[i]);
        if (enteredNum[i] > 0)
        {
            positiveNum++;
        }
        else
        {
            negativeNum++;
        }
        if (enteredNum[i] % 2 == 0)
        {
            evenNum++;
        }
        else
        {
            oddNum++;
        }
    }
    printf("the total positive number are: %d\n", positiveNum);
    printf("the total negative number are: %d\n", negativeNum);
    printf("the total even number are: %d\n", evenNum);
    printf("the total odd number are: %d\n", oddNum);
}