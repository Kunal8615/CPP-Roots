#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

struct node *head = NULL;

struct node *insert(struct node *head, int number)
{
    node *ptr = head;
= t5 5
    for (int i = 1; i <= number; i++)
    {
        int element;
        struct node *obj;
        obj = (node *)malloc(sizeof(node));

        cout << "Enter"<<i<<" value : ";
        cin >> element;
        obj->data = element;
        obj->next = NULL;

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
    }

    return head;
}

int main()
{
    head = insert(head, 3);
    // Add other function calls or operations as needed

    return 0;
}
