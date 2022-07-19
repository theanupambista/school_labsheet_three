#include <stdio.h>
#include <string.h>
int main()
{
    int str[100];
    printf("enter the string: ");
    gets(str);
    printf("string in reverse order is %s\n", strrev(str));
}