#include <stdio.h>
#include <stdlib.h>

int selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    printf("Enter size of array :");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 500 + 1;

        printf("%d ", arr[i]);
    }
    printf("\n");
    selectionsort(arr, n);
}