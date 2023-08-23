#include <stdio.h>
#include <stdlib.h>

int sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter your size of array :");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000 + 1;

        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr, n);
}