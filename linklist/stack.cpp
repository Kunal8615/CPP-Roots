#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *top ;

struct node * push(node * top,int value){
    node * val;
    val = (node*)malloc(sizeof(node));
    val->data = value;
    val->next = top;
    top = val;
    return top;
}

void display(struct node *top)
{

    while (top != NULL)
    {
        printf("%d->", top->data);
        top = top->next;
    }
    printf("NULL");
}

struct node *pop(node *top){
            node * temp;
            temp = top;
            top = top->next; 
            free(temp);
            cout<<endl;
            return top;
}

int main(){
    top = push(top,1);
    top = push(top,2);
    top = push(top,3);
    top = push(top,4);
    display(top);
    top= pop(top);
    display(top);


}