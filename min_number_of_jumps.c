#include <stdio.h>

int main()
{
    int jumps = 0, N, m, arr[20];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    m = N;
    printf("Value of m = %d\n", m);
    printf("Enter the elements of the array:");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = arr[0]; j < arr[i]; j++)
        {
            if (arr[j] == 0)
            {
                goto exit;
            }
            else
            {
                // printf("\n%d %d", j, m);
                m -= arr[j];
                jumps++;
                if (m <= 0)
                {
                    goto print;
                }
            }
        }
    }
exit:
    return -1;

print:
    printf("\nMin Jumps: %d", jumps);
    return 0;
}