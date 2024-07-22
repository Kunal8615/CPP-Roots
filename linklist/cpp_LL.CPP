
#include <bits/stdc++.h>
using namespace std;

struct  node {
    int data;
    node * next;
 
};

class link_list{
    private:
    node * head,*tail;

 public:
 link_list(){
    head= nullptr;
    tail = nullptr;
 }
   void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

};

int main()
{
    link_list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}