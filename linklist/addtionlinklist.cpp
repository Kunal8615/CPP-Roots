#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

struct node *head1=NULL;;
struct node *head2=NULL;
struct node *head3=NULL;
struct node *creation1(node *head1, int total)
{
    for (int i = 1; i <= total; i++)
    {
        struct node *ptr;
        struct node *block;
        block = (node *)malloc(sizeof(node));
        int element;
        cout << "enter value: ";
        cin >> element;
        block->data = element;
        block->next = NULL;
        if (head1 == NULL)
        {
            head1 = block;
            ptr = block;
        }
        else
        {
            ptr->next = block;
            ptr = block;
        }
    }
    return head1;
}

struct node *creation2(node *head2, int total)
{
    for (int i = 1; i <= total; i++)
    {
        struct node *ptr;
        struct node *block;
        block = (node *)malloc(sizeof(node));
        int element;
        cout << "enter value: ";
        cin >> element;
        block->data = element;
        block->next = NULL;
        if (head2 == NULL)
        {
            head2 = block;
            ptr = block;
        }
        else
        {
            ptr->next = block;
            ptr = block;
        }
    }
    return head2;
}


struct node *add(node* head1,node *head2){

//head3 = ptr;
 while(head1!=NULL || head2!=NULL){
    struct node * ptr;
    struct node * result;
    result = (node*)malloc(sizeof(node));
    result->data = ((head1->data)+(head2->data));
    result->next = NULL;
       if (head3 == NULL)
        {
            head3 = result;
            ptr = result;
        }
        else
        {
            ptr->next = result;
            ptr = result;
        }
        head1 = head1->next;
        head2  = head2->next;

 }
return head3;
}


void display(struct node *head)
{
    node *ptr1 = head;
    while (ptr1 != NULL)
    {
        printf("%d->", (ptr1->data));
        ptr1 = ptr1->next;
    }
}

int main()
{
    int give1,give2;
    cout << "how many node u want insert in LL1: ";
    cin >> give1;
    head1 = creation1(head1, give1);
    display(head1);
    cout <<endl<<"how many node u want insert in LL2:";
    cin >> give2;
    head2 = creation2(head2, give2);
    display(head2);
    head3 = add(head1,head2);
    cout<<endl<<"after add"<<endl;
     display(head3);
}