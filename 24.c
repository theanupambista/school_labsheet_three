#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    char str3[100];
    int i = 0, j = 0;
    printf("enter first string: ");
    gets(str1);
    printf("enter second string: ");
    gets(str2);
    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s", str2);

    // Insert the first string in the new string
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    printf("\nConcatenated string: %s", str3);

    return 0;
}