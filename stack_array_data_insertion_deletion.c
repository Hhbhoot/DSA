#include <stdio.h>
#define n 5

int arr[n];
int top = -1;

int insertend(int val)
{
    if (top >= (n - 1))
        printf("Array is full...\n");

    else
    {
        top++;
        arr[top] = val;
    }
}

int display()
{
    if (top < 0)
    {
        printf("Array is Empty..\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}

int deletend()
{
    if (top < 0)
        printf("Arrray is Empty..\n");

    else
    {
        top--;
    }
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    deletend();
    deletend();
    insertend(52);

    display();
}