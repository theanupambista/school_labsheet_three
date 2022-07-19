#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    int j;
    char a;
    printf("enter the string: ");
    gets(str);
    printf("string in reverse order is %s\n", strrev(str));
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
    }
    printf("the reverse string is %s", str);
}