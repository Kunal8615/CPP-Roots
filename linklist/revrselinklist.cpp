#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

struct Node *reverse(struct Node *head)
{

    Node *pre = nullptr;
    Node *nex;
    Node *current = head;
    ;

    while (current != nullptr)
    {
        nex = current->next;
        current->next = pre;
        pre = current;
        current = nex;
    }

    return pre;
}

Node *head = nullptr;

void display(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node *create(Node *head, int value)
{
    Node *nnode = new Node;
    nnode->data = value;
    Node *ptr;
    nnode->next = nullptr;

    if (head == nullptr)
    {
        head = nnode;
        ptr = nnode;
    }
    else
    {
        ptr->next = nnode;
        ptr = nnode;
    }

    return head;
}

int main()
{
    head = create(head, 5);
    head = create(head, 3);
    head = create(head, 4);
    head = create(head, 6);
    head = create(head, 1);
    head = create(head, 8);
    head = create(head, 7);
    display(head);

    head = reverse(head);
    display(head);

    // Clean up memory (deallocate nodes)
}
