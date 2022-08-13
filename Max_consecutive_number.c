#include <stdio.h>

int main()
{
    int n, arr[100], max_sum = 0, sum = 1, temp;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter array elemnents:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // First sort the array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Main logic
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            sum += 1;
        }
        else
        {
            if (sum > max_sum)
            {
                max_sum = sum;
                sum = 1;
            }
        }
    }
    printf("%d", max_sum);

    return 0;
}