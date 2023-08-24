#include <stdio.h>
#define n 5
int arr[n];

int front = -1;
int rear = -1;

int insert(int val)
{

    if (rear >= n - 1)
    {
        printf("Array is Full..\n");
    }
    else if (rear < 0)
    {
        front = rear = 0;
        arr[rear] = val;
    }
    else
    {

        rear++;

        arr[rear] = val;
    }
}

int delete()
{
    if (front < 0)
    {
        printf("Array is Empty..\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

int display()
{
    if (front == rear)
    {
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int val;

    insert(50);
    insert(60);
    insert(52);
    insert(45);
    insert(45);
    insert(45);
    insert(55);

    delete ();

    delete ();

    display();
    printf("\n");

    delete ();
    delete ();
    delete ();
    delete ();
    display();
}