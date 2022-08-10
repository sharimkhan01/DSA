#include <stdio.h>

int main()
{
    int n, k, arr[100], sum = 0;
    printf("Enter the number of elements of the array:");
    scanf("%d", &n);
    printf("\n");
    printf("Enter the number of neagotiation:");
    scanf("%d", &k);
    printf("\n");
    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr[i] < 0)
            {
                arr[i] = -arr[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Max sum : %d", sum);

    return 0;
}