// wap to accept a string and display its ascii value.
#include <stdio.h>
int main()
{
    char str[100];
    printf("enter the string: ");
    gets(str);
    printf("the ascii value of %s is %d", str, str);
}