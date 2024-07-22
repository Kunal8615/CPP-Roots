#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;
node *head1 = NULL;
node *head2 = NULL;


//// FIRST LINKLIST
struct node *creation1(int number) {
  node *head1 = NULL;
  node *new1;
  node *ptr;
  int i;
  for (i = 1; i <= number; i++) {
    new1 = (node *)malloc(sizeof(node));
    printf("enter value of %d node :-", i);
    scanf("%d", &new1->data);
    new1->next = NULL;
    if (head1 == NULL) {
      head1 = new1;
      ptr = new1;

    } else {
      ptr->next = new1;
      ptr = new1;
    }
  }
  return head1;
}

// SECOND LINK LIST
struct node *creation2(int number) {
  node *head2 = NULL;
  node *new2;
  node *ptr;
  int i;
  for (i = 1; i <= number; i++) {
    new2 = (node *)malloc(sizeof(node));
    printf("enter value of %d node :-", i);
    scanf("%d", &new2->data);
    new2->next = NULL;
    if (head2 == NULL) {
      head2 = new2;
      ptr = new2;

    } else {
      ptr->next = new2;
      ptr = new2;
    }
  }
  return head2;
}
// addtion of linklist
struct node *addtion(node *head1, node *head2) {
  node *head3 = NULL;
  node *new;
  node *ptr;

  while (head1 != NULL || head2 != NULL) {
  new = (node *)malloc(sizeof(node));
    new->data = ((head1->data) + (head2->data));
    new->next = NULL;
    if (head3 == NULL) {
      head3 = new;
      ptr = new;
    } else {
      ptr->next = new;
      ptr = new;
    }
    head1 = head1->next;
    head2 = head2->next;
  }

  return head3;
}
// display funcrrion
void display(struct node *head) {
  node *ptr1 = head;
  while (ptr1 != NULL) {
    printf("%d->", (ptr1->data));
    ptr1 = ptr1->next;
  }
}
int main() {

  int need;
  int need1;
  printf("enter no of node u want in first LINKLIST :-");
  scanf("%d", &need);
  node *head1 = creation1(need);
  display(head1);
  printf("\n");
  printf("enter no of node u want insecond  LINKLIST \n :-");
    scanf("%d", &need1);
  node *head2 = creation2( need1);
  display(head2);
  printf(" \n after addtion \n");
  node *head3 = addtion(head1, head2);
  display(head3);
}