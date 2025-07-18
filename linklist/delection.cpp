#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

struct node *head = NULL;

// Function to display the list
void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("null\n");
}

// Function to add a new node at the end
struct node *create(struct node *head, int value) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        node *ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    return head;
}

// Function to delete a node at a specific position
struct node *del(struct node *head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    node *temp = head;

    // Deleting head node
    if (pos == 0) {
        head = head->next;
        free(temp);
        return head;
    }

    // Traverse to the node before the one to delete
    for (int i = 0; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position\n");
        return head;
    }

    node *delNode = temp->next;
    temp->next = delNode->next;
    free(delNode);

    return head;
}

// Main function
int main() {
    head = create(head, 3);
    head = create(head, 4);
    head = create(head, 5);
    head = create(head, 1000);

    head = del(head, 0);  // delete node at position 0

    display(head);

    return 0;
}
