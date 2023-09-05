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
    temp->next = head;
    temp->previous = NULL;

    if (head == NULL)
    {
        head = temp ;
        head -> previous = NULL ;

    }
    
    head = temp;
    head ->previous = NULL;
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
    }

    temp->next = ptr->next;
    ptr->next = temp;
    temp->previous = ptr;
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
        head->previous = NULL;
        head->next = temp;

        temp->next = NULL;
        temp->previous = head;
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
    struct node *ptr = head ;

    if(head == NULL)
    {
        printf("List is Empty..\n");
        return;
    }
    head = ptr ->next ;
    head ->previous = NULL;
    free(ptr);

}

void MidDelete(int position)
{
    struct node *ptr = head ;
    struct node *p;
    while(ptr -> data != position)
    {
        p = ptr;
        ptr = ptr ->next ;
    }
    p ->next = ptr ->next ;
    
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
        printf("Link List Is Empty..\n");
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

int main()
{

    InsertEnd(10);
    InsertEnd(20);
    InsertEnd(30);
    FirstInsert(2);
    FirstInsert(15);
    MidInsert(5, 10);
    DeleteEnd();
    // DeleteEnd();
    MidDelete(10);
    Display();
}
