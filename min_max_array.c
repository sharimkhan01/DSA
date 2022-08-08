#include <stdio.h>

int main()
{
    int arr[1000], size;

    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[1];

    if (arr[0] > arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The max element is: %d\nThe min element is: %d", max, min);

    return 0;
}