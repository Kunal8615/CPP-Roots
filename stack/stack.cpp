// stack push
//LIFO
#include <iostream>
#include <stdlib.h>
using namespace std;
#define size 5
int top = -1;
int stack[size];

void push(int x)
{
    if (top == size)
    {
        cout << "stack is full";
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}
void pop()
{

    top = top - 1;
}

void display(int arr[])
{
    int i = 0;

    while (top != -1 )
    {

        cout << arr[top] << endl;
        top = top - 1;
    }
}

int main()
{
    push(10);
    push(90);
    push(74);
    push(12);
    push(89);
    push(100);
    pop();

    display(stack);
    return 0;
}
