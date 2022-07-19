#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter the string: ");
    gets(str);
    int upper = 0, lower = 0, space = 0, special = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] == ' ')
            space++;
        else
            special++;
    }
    printf("Upppercase letter: %d\n", upper);
    printf("lowercase letter %d\n", lower);
    printf("space letter %d\n", space);
    printf("special letter %d\n", special);
}