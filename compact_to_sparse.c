#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], a_row, a_col = 3, b_row, b_col, count = 0;
    printf("Enter the number of rows and cols in the sparse matrix: ");
    scanf("%d %d", &b_row, &b_col);
    printf("Enter the number of non-zero elements: ");
    scanf("%d", &a_row);
    // Taking input of compact matrix
    printf("Enter the elements of the compact matrix: ");
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // Now display compact matrix
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < b_row; i++)
    {
        for (int j = 0; j < b_col; j++)
        {
            if (i == A[count][0] && j == A[count][1])
            {
                B[i][j] = A[count][2];
                count++;
            }
            else
            {
                B[i][j] = 0;
            }
        }
    }
    printf("\n");
    // Printing sparse
    for (int i = 0; i < b_row; i++)
    {
        for (int j = 0; j < b_col; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}