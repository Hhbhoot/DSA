#include <stdio.h>
int main()
{
    int n;

    printf("Enter value of n :");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter n ; ");
        scanf("%d", &arr[i]);
    }

    int temp;
    temp = arr[0];

    for (int i = 0; i < n; i++)
    {

        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}