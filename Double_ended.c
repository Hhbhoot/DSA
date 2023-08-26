#include <stdio.h>
#define n 5
int arr[n];
int f = -1, r = -1;

int insert(int val)
{
    if (r < 0)
    {
        f = r = 0;
        arr[r] = val;
    }
    else if (r >= n - 1)
    {
        printf("Queue is Full...\n");
    }
    else
    {
        r++;

        arr[r] = val;
    }
}
int delete()
{
    if (f < 0)
    {
        printf("Queue is Empty...");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}
int fisrtinsert(int val)
{
    if (r < 0)
    {
        r = f = 0;
        arr[r] = val;
    }

    else if (f == 0)

    {
        printf("Position is filled..\n");
    }

    else
    {
        f--;
        arr[f] = val;
    }
}
int lastdel()
{
    if (f < 0)
    {
        printf("Queue is Empty..\n");
    }
    else if (r == f)
    {

        r = f = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
    if (f < 0)
    {
        printf("Queue is Empty...\n");
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{

    int ch, val;

    do
    {

        printf("1.Insert In Next Position \n");
        printf("2.Insert in First Position\n");
        printf("3.Delete From Last Position\n");
        printf("4.Delete From First Position\n");
        printf("5.Display Queue \n");
        printf("\n");

        printf("Enter Your Choice...\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Value :");
            scanf("%d", &val);
            insert(val);
            break;

        case 2:
            printf("Enter Value :");
            scanf("%d", &val);
            fisrtinsert(val);
            break;

        case 3:
            lastdel();

            break;

        case 4:
            delete ();
            break;

        case 5:
            display();
            break;

        default:
            printf("Wrong input . Enter Input  Again..\n");
            break;
        }
    } while (ch != 5);
}