#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], a_row, a_col = 3, b_row, b_col, a, count = 0;
    printf("Enter the number of non zero elements: ");
    scanf("%d", &a_row);
    printf("Enter the elements of the compact matrix: ");
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // Printing the compact matrix
    printf("The compact matrix is: ");
    printf("\n");
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < a_row; i++)
    {
        a = 0;
        while (a < a_row)
        {
            if (A[a][1] == i)
            {
                B[count][0] = A[a][1];
                B[count][1] = A[a][0];
                B[count][2] = A[a][2];
                count++;
            }
            a++;
        }
    }
    // Printing array B;
    printf("Transpose: \n");
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_col; j++)
        {
            printf("%d ", B[i][j]);
        }

        printf("\n");
    }

    return 0;
}