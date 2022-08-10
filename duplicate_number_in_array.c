#include <stdio.h>

int main()
{
    int n, temp, count = 0, arr[100], k;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Checking for duplicate element.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (arr[i] == arr[j])
            {
                k = i;
                goto bahr;
            }
        }
    }
bahr:
    printf("%d", arr[k]);
    return 0;
}