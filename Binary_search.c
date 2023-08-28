#include <stdio.h>
#include <stdlib.h>
#define n 10

int mergesort(int arr[], int m, int l, int h)
{
    printf("M: %d\n", m);
    printf("L : %d\th: %d\n", l, h);
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        printf("mid: %d\n", arr[mid]);
        if (arr[mid] == m)
            return mid;
        else if (arr[mid] < m)
        {
            return mergesort(arr, m, mid + 1, h);
        }
        else
        {
            return mergesort(arr, m, l, mid - 1);
        }
    }
    return -1;
}
int main()
{
    int m;
    int arr[n] = {2, 3, 6, 8, 9, 11, 12, 13, 15, 45};

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter your Element..: ");
    scanf("%d", &m);

    int y = mergesort(arr, m, 0, 9);

    if (y == -1)
    {
        printf("Your Element is not found..\n");
        // printf("Your Element is : %d \n", y);
    }
    else
    {
        printf("Your Element is : %d \n", y);
        // printf("Your Element is not found..\n");
    }
}