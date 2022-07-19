#include <stdio.h>

int main()
{
    int userInput[5];
    printf("Enter the marks in Maths: ");
    scanf("%d", &userInput[0]);
    printf("Enter the marks in c: ");
    scanf("%d", &userInput[1]);
    printf("Enter the marks in physcis: ");
    scanf("%d", &userInput[2]);
    printf("Enter the marks in dl: ");
    scanf("%d", &userInput[3]);
    printf("Enter the marks in iit: ");
    scanf("%d", &userInput[4]);
    int size = sizeof(userInput) / sizeof(int);
    printf("The size is : %d\n", size);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (userInput[i] < userInput[j])
            {
                int temp = userInput[i];
                userInput[i] = userInput[j];
                userInput[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", userInput[i]);
    }
    printf("the maximum marks is %d\n", userInput[0]);
    printf("the minimum marks is %d", userInput[size - 1]);
}