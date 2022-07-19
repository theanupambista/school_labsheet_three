#include <stdio.h>
int main()
{
    int userInput[10];
    int sum = 0, product = 1, maxNum;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &userInput[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += userInput[i];
    }
    for (int i = 0; i < 10; i++)
    {
        product *= userInput[i];
    }
    maxNum = userInput[0];
    for (int i = 0; i < 10; i++)
    {
        if (userInput[i] > maxNum)
        {
            maxNum = userInput[i];
        }
    }

    printf("The total sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The average is %d\n", sum / 10);
    printf("The maximum number is %d\n", maxNum);
}