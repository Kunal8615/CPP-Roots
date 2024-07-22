#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
struct node *head = NULL;

void display(struct node *head)
{

    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL");
}

struct node *create(struct node *head, int value)
{
    node *new = (node *)malloc(sizeof(node));
    new->data = value;
    new->next = NULL;
    node *ptr;

    if (head == NULL)
    {
        head = new;
        ptr = new;
    }
    else
    {
        ptr->next = new;
        ptr = new;
    }
    return head;
}

int main()
{

    head = create(head, 3);
    head = create(head, 4);
    head = create(head, 5);
    head = create(head, 1000);

    display(head);
    return 0;
}