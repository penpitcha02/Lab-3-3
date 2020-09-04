#include<stdio.h>
int main()
{
    int n,i, j, k;
    scanf_s("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (j = 1; j <= (2*n -1)-(2*i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 2*n-1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf("*");
        }
        for (j = 1; j <= 2 * i -1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= n - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}