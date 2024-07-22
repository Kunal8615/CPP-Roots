#include <iostream>
using namespace std;

struct node{
    int data;
    node * next;
};
class linklist{
private:
    node* head;
    node * ptr;
public:
    linklist(){
    head = nullptr;
    ptr= nullptr;
}

void insert(int value){
    node * newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
  
    if(head ==nullptr){
        head = newnode;
        ptr = newnode;
    }
    else{
        ptr->next = newnode;
        ptr = newnode;
    }
;
    }

  void print() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";

            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

void deletenode(int value){
    if(head->data == value){
        node *temp = head;
        head= head->next;
        delete temp;
    }
    else{
         node *temp = head;
    while(temp->next!=nullptr && temp->next->data != value){
        temp=temp->next;
    }
    node * deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
    }
}
};


int main(){
    linklist l1;
    l1.insert(10);
    l1.insert(13);
    l1.insert(105);

   // l1.print();
 //   l1.deletenode(10);
    l1.deletenode(105);
    l1.print();

}