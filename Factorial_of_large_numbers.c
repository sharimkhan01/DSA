#include <stdio.h>
int factorial(long int n)
{
    long int fact;
    if (n == 0)
    {
        fact = 1;
    }
    else
    {
        fact = n * factorial(n - 1);
    }
    return fact;
}

int main()
{
    long int fact;
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("%ld", fact);
    return 0;
}