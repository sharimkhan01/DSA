#include <stdio.h>

void main()
{
    int arr[100], n;
    printf("Enter the size of the array");
    scanf("%d", &n);
    // Printing the sorted array without using sorting algorithm
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            printf("%d ", arr[i]);
        }
    }
}