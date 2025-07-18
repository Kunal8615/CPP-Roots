#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
   struct node *next;
};

class linklist{
private:
 node *head;
 node *ptr;
 

 public:

 linklist(){
    head = nullptr;
    ptr = nullptr;
    
 }

 void insert(int value){
    node *newnode = new node();
    newnode->data = value ;
    newnode->next =nullptr;

    if(head==nullptr){
        head = newnode;
        ptr = newnode;
    }
    else{
        ptr->next = newnode;
        ptr = newnode;
        
    }
   
 }

 void print(){
    node* ptrr = head;
    while(ptrr != nullptr){
        printf("%d",ptrr->data);
        ptrr = ptrr->next;
    }

}
};

int main(){
    linklist a;
    a.insert(5);
    a.insert(7);
    a.insert(9);
   a.print();
  
    return 0; 
}