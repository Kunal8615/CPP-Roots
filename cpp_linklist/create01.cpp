#include <iostream>
using namespace std;

struct  node {
int data;
node * next;
};

class linklist{
private:
    node * head;
    node * ptr;
    node * current;

public:
    linklist(){
        head = nullptr;
        ptr = nullptr;
        current = nullptr;
    }

void inerst(int val){
        node* newnode = new node();
        newnode->data = val;
        newnode->next = nullptr;

        if(head ==nullptr){
            head=newnode;
            ptr=newnode;
        }


        else{
            ptr->next = newnode;
            ptr =newnode;
        }
    };

 void deletenode(int pos){
        ptr = head;
        int count=1;
        node * current = nullptr;
       
  
        while(ptr!=nullptr && count <pos){
            current =ptr;
            count+=1;
            ptr= ptr->next;
        }
        
        current->next = ptr->next;
        delete ptr;
      
    }

     void print() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";

            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

   void reverse() {
    node *prev = nullptr;
    node *current = head;
    node *nextt = nullptr;

    while (current != nullptr) {
        nextt = current->next;  
        current->next = prev;   
        prev = current;         
        current = nextt;
    }

    head = prev;  
}
node* recursiveReverse(node* head) {

    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    node* newHead = recursiveReverse(head->next);

    head->next->next = head;
    head->next = nullptr;

    return newHead;
}


void fun(){
    head = recursiveReverse(head);
}
};


int main(){
    linklist a;
    a.inerst(1);
     a.inerst(2);
     a.inerst(3);
     a.inerst(4);
     a.inerst(5);
     a.print();
    // a.reverse();
    a.fun();
     a.print();
    
}