// wap that ask user to enter 10 numbers and sort them in ascending order.
#include <stdio.h>
void sortAsc(int *userInput)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (userInput[i] > userInput[j])
            {
                int temp = userInput[i];
                userInput[i] = userInput[j];
                userInput[j] = temp;
            }
        }
    }
}

int main()
{
    int userInput[10];
    // int sortedArray[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &userInput[i]);
    }
    sortAsc(userInput);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", userInput[i]);
    }
}