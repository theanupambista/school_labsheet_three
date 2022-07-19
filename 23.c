// wap to compare two string and display larger one.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter first string: ");
    gets(str1);
    printf("enter second string: ");
    gets(str2);
    if (strcmp(str1, str2) > 0)
    {
        printf("%s", str1);
    }
    else
    {
        printf("%s", str2);
    }
}