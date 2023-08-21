#include <stdio.h>
#include <stdlib.h>

int search(int a[])
{
    int n;

    printf("Enter your search data :");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            return n;
        }
    }

    return -1;
}

int main()
{
    int arr[5], n;

    for (int i = 0; i < 5; i++)
    {

        arr[i] = rand() % 50 + 1;

        printf("%d ", arr[i]);
    }
    printf("\n");
    int m = search(arr);

    if (m >= 0)
    {
        printf("Your element is presented in array : \n");
    }
    else
    {
        printf("Data not found....");
    }
}
