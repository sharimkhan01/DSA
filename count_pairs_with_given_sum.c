#include <stdio.h>

int main()
{
    int n, k, A[10], sum = 0, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the value of k :");
    scanf("%d", &k);
    // Checking the conditions
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = A[i] + A[j];
            if (sum == k)
            {
                count++;
            }
            sum = 0;
        }
    }
    printf("Count : %d", count);
}