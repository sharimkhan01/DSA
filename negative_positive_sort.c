#include <stdio.h>
void sort_neg(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*p < 0)
        {
            printf("%d ", *p);
        }
        p++;
    }
}
void sort_pos(int *p, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (*p >= 0)
        {
            printf("%d ", *p);
        }
        p++;
    }
}

int main()
{
    int arr[100], n;
    printf("Enter the number of elements of the array:\n");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort_neg(arr, n);
    sort_pos(arr, n);

    return 0;
}
