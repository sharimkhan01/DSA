#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[10], n1, n2, n3;
    printf("ENter the number of elements in first array:");
    scanf("%d", &n1);
    printf("ENter the number of elements in second array:");
    scanf("%d", &n2);
    printf("ENter the number of elements in third array:");
    scanf("%d", &n3);
    printf("enter the elements in the first array:");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the elements in the second array:");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("enter the elements in the third array:");
    for (int i = 0; i < n3; i++)
    {
        scanf("%d", &arr3[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr2[j] == arr1[i])
            {
                for (int k = 0; k < n3; k++)
                {
                    if (arr2[j] == arr3[k])
                    {
                        printf("%d ", arr2[j]);
                    }
                }
            }
        }
    }

    return 0;
}