#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int c = 0, count = 0;
    printf("enter the string: ");
    gets(s);
    while (s[c] != '\0')
    {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] == 'o' || s[c] == 'O' || s[c] == 'u' || s[c] == 'U')
        {
            count++;
        }
        c++;
    }
    printf("the total number of vowels are: %d", count);
}