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
        head -> next = temp ;  
        return;
    }
    while(ptr ->next != head)
    {
        ptr = ptr ->next ;
    }

    ptr ->next =temp ;
    temp ->previous = ptr ;
    temp ->next = head ;
    head ->previous = temp ;
    
    head = temp ;
    
    
    
}
void MidInsert(int val, int position)
{
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));   
    temp->data = val;

    while (ptr->data != position)
    {
        ptr = ptr->next;
    }

    temp->next = ptr ->next;
    ptr -> next->previous = temp;
    ptr->next = temp;
    temp->previous = ptr;
    return ;
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
        head -> next = temp;
        temp ->next = head ;

        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;

    temp->next = head ;
      temp->previous = ptr ;
}

void FirstDelete()
{
    struct node *ptr = head;
    struct node *p ;
    
    

    if (head == NULL)
    {
        printf("List is Empty..\n");
        return;
    }
    while(ptr -> next != head )
    {
        ptr = ptr -> next;
        p = ptr;
       
       
    }

    ptr ->next =head -> next ;
    free(head);
    head = ptr ->next ;
    head ->previous = p;
    p -> next = head;


     
    

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
    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    head ->previous = p ;

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
       
        while (ptr ->next != head )
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);

    }
}
void ReverseDisplay()
{
    struct node *ptr = head;
    struct node *temp;

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

      

    while (ptr-> previous != head ->previous)
    {
        printf("%d ", ptr->data);
        ptr = ptr->previous;
    }
        printf("%d ", ptr->data);

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
            break ;
        }
    } while (ch != 0);
}