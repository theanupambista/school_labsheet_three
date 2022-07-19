#include <stdio.h>
int main()
{
    char str[100];
    printf("enter the string to capitalize: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("lowercase string: %s", str);
    return 0;
}