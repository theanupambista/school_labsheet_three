#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, length;
    int flag = 0;
    printf("enter the string: ");
    gets(str);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("not a palindrome");
    }
    else
    {
        printf("palindrome");
    }

    // paap --> paap
}