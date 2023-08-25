#include <stdio.h>
#define n 5
int f = -1, r = -1;
int arr[n];
int insertend(int val)
{
    if (r < 0)
    {
        f = r = 0;

        arr[r] = val;
    }
    else if ((r + 1) % n == f)
    {

        printf("Queue is Full..\n");
    }
    else
    {
        r = (r + 1) % n;

        arr[r] = val;
    }
}
int deleteEnd()
{
    if (f < 0)
    {
        printf("Queue is Empty..\n");
    }
    else if (f == r)
    {

        f = r = -1;
    }
    else
    {
        f = (f + 1) % n;
    }
}
int display()
{
    int i = f;
    if (i < 0)
    {
        printf("Queue is Empty...\n");
    }
    else
    {
        do
        {

            printf("%d ", arr[i]);
            i = (i + 1) % n;

        } while (i != (r + 1) % n);
    }
}

int main()
{
    // insertend(100);
    // insertend(100);
    // insertend(100);
    // insertend(100);
    // insertend(100);
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // insertend(100);
    // display();

    int ch, val;

    do{

    printf("1.insertEnd\n");
    printf("2.deleteEnd\n");
    printf("3.Display\n");
   
    printf("Enter Your choice :");
    scanf("%d", &ch);

   
    switch (ch)
    {
    case 1:
        printf("Enter value : ");
        scanf("%d", val);
        insertend(val);
        break;

    case 2:
        deleteEnd();
        break;

    case 3:

        display();
        break;

    default:
        printf("Wrong choie Entererd..\n");
        break;
    
              }
    }while (ch != 3);
}