#include <stdio.h>

int main()
{
    int n, arr[10], temp, count = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter the elements in the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                count++;
            }
        }
    }
    printf("\n");
    printf("%d", count);

    return 0;
}