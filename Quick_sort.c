#include <stdio.h>
#include <stdlib.h>
#define n 5
int arr[n];

int print(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int quicksort(int arr[], int l, int h)
{
    int i, j, temp, pivot;

    if (l < h)
    {
        printf("\n");
        print(arr);

        pivot = l;
        i = l;
        j = h;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < h)
                i++;
            while (arr[pivot] < arr[j])
                j--;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
    
    quicksort(arr, l, j - 1);
    quicksort(arr, j + 1, h);
    }
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 99) + 1;
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, n - 1);
}