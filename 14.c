#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter a string: ");
    gets(name);
    int i = 0;
    int length = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    printf("the length of string is %d", length);
}