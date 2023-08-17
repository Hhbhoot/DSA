#include <stdio.h>
int main()
{

  int n;

  printf("Enter your value of n :");
  scanf("%d", &n);

  int arr[n]; // output=>  10 20 3 40 50 =>20 30 40 50 10

  for (int i = 0; i < n; i++)
  {
    printf("Enter value of arr[%d]", i);
    scanf("%d", &arr[i]);
  }

  int a[n];

  for (int i = 0; i < n; i++)
  {
    a[i] = arr[i + 1];

    a[n - 1] = arr[0];
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}