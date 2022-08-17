#include <stdio.h>

int main()
{
    int n, arr[20];

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], max = arr[1], min_index, sum = 0, diff;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {

            min = arr[i];
            min_index = i;
            if (min_index == (n - 1))
            {
                printf("0 is returned");
                return 0;
            }
        }
    }
    for (int i = min_index; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    diff = max - min;
    printf("Output : %d", diff);
    return 0;
}