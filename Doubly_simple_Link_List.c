#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *head = NULL;

void FirstInsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->previous = NULL;
        temp->next = NULL;
        return;
    }
    temp->next = ptr;
    ptr->previous = temp;
    temp->previous = NULL;
    head = temp;
}
void MidInsert(int val, int position)
{
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->previous = NULL;

    while (ptr->data != position)
    {

        ptr = ptr->next;
        p = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;

    temp->previous = ptr;
    p->previous = temp;
}
void InsertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->previous = NULL;

    if (head == NULL)
    {
        head = temp;

        return;
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;

    temp->next = NULL;
    temp->previous = ptr;
}

void FirstDelete()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is Empty..\n");
        return;
    }
    head = ptr->next;
    head->previous = NULL;
    free(ptr);
}

void MidDelete(int position)
{
    struct node *ptr = head;
    struct node *p;
    struct node *q;
    while (ptr->data != position)
    {
        p = ptr;
        ptr = ptr->next;
    }
    q = ptr->next;
    p->next = q;
    q->previous = p;

    free(ptr);
}

void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        printf("List is Empty...\n");
        return;
    }
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;

    free(ptr);
}
void Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is Empty..\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
void ReverseDisplay()
{
    struct node *ptr = head;
    struct node *temp;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    temp = ptr;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->previous;
    }
}

int main()
{
    int ch, val, position;
    do
    {
        printf("1.insertEnd\n");
        printf("2.First Insert\n");
        printf("3.Mid insert\n");
        printf("4.DeleteEnd\n");
        printf("5.Delete First\n");
        printf("6.Mid Delete\n");
        printf("7.Display\n");
        printf("8.Reverse Display\n");
        printf("press 0 for Stop the Loop\n");

        printf("\n");

        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Your Value : ");
            scanf("%d", &val);
            InsertEnd(val);
            break;

        case 2:
            printf("Enter Your Value : ");
            scanf("%d", &val);
            FirstInsert(val);
            break;

        case 3:
            printf("Enter Your Value & Position : ");
            scanf("%d%d", &val, &position);
            MidInsert(val, position);
            break;

        case 4:
            DeleteEnd();
            break;

        case 5:
            FirstDelete();
            break;

        case 6:
            printf("Enter position to Delete : ");
            scanf("%d", &position);
            MidDelete(position);
            break;

        case 7:
            Display();
            printf("\n");
            break;

        case 8:
            ReverseDisplay();
            printf("\n");
            break;

        default:
            printf("Wrong Choice..Pls Enter current Choice");
        }
    } while (ch != 0);
}
