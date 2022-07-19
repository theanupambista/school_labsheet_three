#include <stdio.h>
int main()
{
    int userInput[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &userInput[i]);
    }
    int maxNum = userInput[0];
    int minNum = userInput[0];
    for (int i = 0; i < 10; i++)
    {
        if (userInput[i] > maxNum)
        {
            maxNum = userInput[i];
        }
        if (userInput[i] < minNum)
        {
            minNum = userInput[i];
        }
    }
    printf("the maximum number is %d\n", maxNum);
    printf("the minimum number is %d", minNum);
}