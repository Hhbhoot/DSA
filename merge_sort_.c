#include <stdio.h>
#include <stdlib.h>
#define n 5

void merge(int arr[], int mid, int l, int h)
{
    int brr[100], i = l, j = mid + 1, k = l;

    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            brr[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        brr[k] = arr[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        brr[k] = arr[j];
        k++;
        j++;
    }

    for (int i = l; i <= h; i++)
    {
       arr[i] = brr[i];
    }
}

int mergesort(int arr[], int l, int h)
{
    int mid;

    if (l < h)
    {

        mid = (l + h) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);

        merge(arr, mid, l, h);
    }
}

int main()
{

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 99)+ 1;

        printf("%d ", arr[i]);
    }
    printf("\n");

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// merge sort => divide array until its size comes to 1 or contain only one element and merge
// It Works On Divide And Conquer Principal