#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100], s2[100];
    printf("Enter the value of s1:\n");
    gets(s1);
    int l = 0;
    while (s1[l] != '\0')
    {
        l++;
    }

    for (int i = 0; s1[i] != '\0'; i++, l--)
    {
        s2[i] = s1[l - 1];
        printf("%c", s2[i]);
    }
    // printf("%s", s2);
    // puts(s2);
}