// wap to enter 10 different numbers and print them with array variable and address.
#include <stdio.h>
int main()
{
    int userInput[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &userInput[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("userInput[%d]: %d\n", i, &userInput[i]);
    }
}