#include <stdio.h>

int main()
{
    int arr[100], n;
    printf("Enter the number of elements of the array");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d ", arr[n - 1]);
    for (int i = 0; i < n - 2; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}