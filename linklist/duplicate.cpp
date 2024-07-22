#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

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
    printf("NULL\n");
}

struct node *create(struct node *head, int value)
{
    node *obj = (node *)malloc(sizeof(node));
    obj->data = value;
    obj->next = NULL;
    node *ptr;

    if (head == NULL)
    {
        head = obj;
        ptr = obj;
    }
    else
    {
        ptr->next = obj;
        ptr = obj;
    }
    return head;
}

bool check(struct node *head)
{
    node *current = head;
    node *ptr;

    while (current != NULL)
    {
        ptr = current->next;
        while (ptr != NULL)
        {
            if (ptr->data == current->data)
            {
                return true;
                return ptr->data; // If a match is found, return true
            }
            ptr = ptr->next;
        }
        current = current->next;
    }

    return false; // If no match is found, return false
}

int main()
{
    head = create(head, 3);
    head = create(head, 4);
    head = create(head, 5);
    head = create(head, 1000);
    head = create(head,4);
   // head = create()

  //  head = create(head, 3);

    display(head);

    if (check(head))
    {
        cout << "Duplicates found in the linked list." << endl;
        
    }
    else
    {
        cout << "No duplicates found in the linked list." << endl;
    }

    return 0;
}
