#include <iostream>
#include <stdio.h>
 using namespace std;

 struct node {
    int data;
    node *next;
 };

 class circular_LL{
    public:
    node * head = nullptr;
    node * ptr;

   void insert (int value ){
    node * newnode = new node();
    newnode->data = value;

    if(head == nullptr){
        head = newnode;
        newnode->next = head;
        ptr= head;
    }
    else {
        ptr->next = newnode;
        newnode->next = head;
        ptr= newnode;
    }
   }

     void display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    node* temp = head;
    cout << "Linked List: ";
    do {
        cout << temp->data << "-";
        temp = temp->next;
    } while (temp != head);
    cout << temp->data << "-";
        temp = temp->next;
}

 };

 int main(){
    circular_LL a;
    a.insert(5);
    a.insert(6);
    a.insert(8);
    a.insert(9);
    a.display();
    return 0;
 }