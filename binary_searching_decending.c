#include <stdio.h>

int search(int arr[], int n)
{
    int mid, l, h;
    l = 0;
    h = 9;

    for (int i = 0; i <= h; i++)
    {

         mid = (l + h) / 2;

        if (arr[mid] == n)
        {
            return arr[mid];
        }
        else if (arr[mid] > n)
        {
            l= mid + 1;
        }
        else if (arr[mid] < n)
        {
            h = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int n;
    int arr[10] = {50,35,40,35,30,25,20,15,10,5};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Eneter your element :");
    scanf("%d", &n);

    int y = search(arr, n);

    if (y >= 0)
    {
        printf("Your data is founded : %d", y);
    }
    else
    {
        printf("Data not found ");
    }
}