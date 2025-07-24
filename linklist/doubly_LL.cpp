#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct node {
    int data;
    node *next;
    node *prev;
}node;

class linklist{
    public :
     node *head = nullptr;
     node *ptr = nullptr;

     void insert(int value){
         node *newnode = new node();
         newnode->data = value;
         if(head==nullptr){
            head = newnode;
            newnode->next =nullptr;
            newnode->prev = nullptr;
            ptr =head;
         }
         else{  ptr->next = newnode ;
                newnode->prev = ptr;
                newnode ->next = nullptr;
                ptr = newnode;
            
         }
     }

     void display() {
        node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    linklist a;
    a.insert(1);
    a.insert(2);
    a.insert(7);
    a.insert(5);
    a.insert(3);
    a.display();
    return 0;
}