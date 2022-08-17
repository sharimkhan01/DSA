#include <stdio.h>

int main()
{
    int m, n, A[100][100], B[100][100], count = 0, a, b = 3;
    printf("Enter the number of rows:");
    scanf("%d", &m);
    printf("Enter the number of cols:");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] != 0)
            {
                count++;
            }
        }
    }
    a = count;
    printf("count : %d", count);
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    int t = 0;
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] != 0)
            {
                B[t][0] = i;
                printf("row :%d ", B[t][0]);

                B[t][1] = j;
                printf("col :%d ", B[t][1]);

                B[t][2] = A[i][j];
                printf("ele :%d ", B[t][2]);
                printf("\n");
                printf("\n");
                t++;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}