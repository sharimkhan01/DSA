#include <stdio.h>

int main()
{
    int n, arr[100], max_sum = arr[0], sum = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter array elemnents:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max_sum)
        {
            max_sum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    printf("The max sum is: %d", max_sum);

    return 0;
}