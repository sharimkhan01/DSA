#include <stdio.h>

int main()
{
    int k, N, arr[100], min, max;
    printf("\nEnter the value of k: ");
    scanf("%d", &k);
    printf("\nEnter the value of N: ");
    scanf("%d", &N);
    printf("Enter the elements of array: ");
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < k)
        {
            arr[i] += k;
        }
        else if (arr[i] >= k)
        {
            arr[i] -= k;
        }
    }
    printf("Modified array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    if (arr[0] > arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    else if (arr[1] > arr[0])
    {
        max = arr[1];
        min = arr[0];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nMin: %d \nMax:%d", min, max);
    int diff = max - min;
    printf("\nThe sum is : %d", diff);

    return 0;
}