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
    printf("null\n");
}

struct node *create(struct node *head, int value){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    node *ptr;
   
    if (head == NULL)
    {   
        head = newNode;
        ptr=newNode;
    }

    else{

        ptr->next = newNode;
        ptr=newNode;
}
    return head;
    }


struct node *del(struct node * head,int pos){
    node *ptr=head;
    node* current;
    node *pre =NULL;
  //  node *pre;
    int count = 0;
    while(count<pos){
        pre =current;
        current = ptr;
        ptr=ptr->next;
        count = count+1;
    }

       if (count == pos) {
        if (pre != NULL) {
            pre->next = ptr->next;
        } else {
            // If pre is NULL, it means we are deleting the first node
            head = ptr->next;
        }
        free(ptr);
    }
        
    return head;
    }


int main()
{
    head = create(head, 3);
    head = create(head, 4);
    head = create(head, 5);
    head = create(head, 1000);
   del(head,0);

    display(head);

    return 0;
}
