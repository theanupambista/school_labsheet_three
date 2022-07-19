#include <stdio.h>
int main()
{
    int arr[10];
    int revArr[10];
    int elements;
    printf("Enter the number of elements(max:10): ");
    scanf("%d", &elements);
    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = elements - 1; i >= 0; i--)
    {
        revArr[elements - i - 1] = arr[i];
    }
    for (int i = 0; i < elements; i++)
    {
        printf("%d\t", revArr[i]);
    }
}