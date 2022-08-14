#include <stdio.h>

int main()
{
    int a1[20], a2[20], m, n, c = 0;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &m);
    printf("Enter the array elements:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a2[i] == a1[j])
            {
                c++;
            }
        }
    }
    printf("Count: %d\n", c);
    if (c == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}