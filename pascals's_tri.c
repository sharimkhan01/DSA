#include <stdio.h>
#define MAX 100

void main()
{
    int n, arr[MAX][MAX];
    n = 2;
    arr[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = arr[i][i] = 1;
        for (int j = 0; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}