#include <stdio.h>
// #define MAX 100;

int main()
{
    // Declaring the variables
    int size, arr[100];

    // Getting the size of the array
    // printf("Enter the size of the array");
    scanf("%d", &size);

    // Getting the value of array from user
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}