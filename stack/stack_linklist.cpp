#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class
class Stack {
private:
    Node* top; // top pointer

public:
    Stack() {
        top = nullptr; // Initially stack is empty
    }

    // Push function
    void push(int value) {
        Node* newNode = new Node();  // naya node banao
        newNode->data = value;       // data store karo
        newNode->next = top;         // new node ka next purane top ko point kare
        top = newNode;               // top ko new node par set karo
        cout << value << " pushed to stack\n";
    }

    // Pop function
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;         // current top ko temp me store karo
        top = top->next;          // top ko next node par le jao
        cout << temp->data << " popped from stack\n";
        delete temp;              // memory free karo
    }

    // Peek function 
    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element is: " << top->data << "\n";
    }

    // Display function
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    // isEmpty function
    bool isEmpty() {
        return top == nullptr;
    }
};

// Main function to test
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();     // Should print: 30 20 10

    s.pop();         // Should remove 30
    s.display();     // Now: 20 10

    s.peek();        // Should show 20

    return 0;
}
