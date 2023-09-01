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
        head =temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if (head->next == NULL)
    {

        head == NULL;
        free(ptr);
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
    inseretEnd(10);
    inseretEnd(20);
    inseretEnd(30);
    inseretEnd(40);
    inseretEnd(50);
    Display();
    DeleteEnd();
    Display();
}