#include <iostream>
using namespace std;

struct snode{
    int data;
    snode * next;
};
class linklist{
private:
    snode* head;
    snode * ptr;
public:
    linklist(){
    head = nullptr;
    ptr= nullptr;
}

void insert(int value){
    snode * newnode = new snode();
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
        snode* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
 
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

void deletenode(int value){
    if(head->data == value){
        snode *temp = head;
        head= head->next;
        delete temp;
    }
    else{
         snode *temp = head;
    while(temp->next!=nullptr && temp->next->data != value){
        temp=temp->next;
    }
    snode * deletenode = temp->next;
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