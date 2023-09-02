#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

struct node *head = NULL;

void inseretEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

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
    return;
}

void MidInsert(int val, int position)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
void Firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
   
    if(head  == NULL)
    {
        head -> data = val;
        head -> next = NULL;
        return ;

    }

    temp->next = head;
    head = temp;
    head->data = val;
}
void MidDelete(int position)
{
    struct node *ptr = head;
    struct node *p;


    while (ptr->data != position)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {

        printf("List Is Empty..\n");
        
        
        return;
    }
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = NULL;
    free(ptr);
    return;
}
void FirstDelete()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        head = NULL;
        printf("List Is Empty..\n");
        return ;
    }
    head = ptr->next;
    free(ptr);
}
int Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List Is  Empty..");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
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
        printf("press 0 for Stop the Loop\n");

        printf("\n");

        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Your Value : ");
            scanf("%d", &val);
            inseretEnd(val);
            break;

        case 2:
            printf("Enter Your Value : ");
            scanf("%d", &val);
            Firstinsert(val);
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
            break;

        default:
            printf("Wrong Choice..Pls Enter current Choice");
        }
    } while (ch != 0);
}