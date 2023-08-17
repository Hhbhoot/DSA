#include <stdio.h>
int main()
{
    int n, m;

    printf("Enter value of n :");
    scanf("%d", &n);

    printf("Enter value of m :");
    scanf("%d", &m);

    int a[n];
    int b[m];

    int c[n + m];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value of a[%d]", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("Enter value of b[%d]", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)

    {
        c[i] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        c[i + n] = b[i];
    }

    for (int i = 0; i < m + n; i++)
    {
        printf(" %d \t", c[i]);
    }
}