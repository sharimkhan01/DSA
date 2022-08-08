#include <stdio.h>

int main()
{
    int arr[1000], size, k, temp;

    printf("Enter size of the array");
    scanf("%d", &size);
    printf("Enter k");
    scanf("%d", &k);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // In order to find the kth element we need to sort the array entered by the user
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Printing sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%dth smallest: %d\n%dth largest: %d", k, arr[k - 1], k, arr[size - k]);
}