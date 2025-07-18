#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class link_list {
private:
    node* head; 
    node* tail; 

public:
    // Constructor
    link_list() {
        head = nullptr;
        tail = nullptr;
    }
    // Function to add a node
    void add_node(int n) {
        node* tmp = new node; // Create a new node
        tmp->data = n;
        tmp->next = nullptr;

        if (head == nullptr) { // If list is empty
            head = tmp;
            tail = tmp;
        } else { // Add at the end
            tail->next = tmp;
            tail = tmp;
        }
    }

    // Function to display the linked list
    void display() {
        node* current = head; // Start from the head
        while (current != nullptr) { // Traverse till the end
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    link_list a;

    // Adding nodes
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);

    // Displaying the linked list
    cout << "Linked List: ";
    a.display();

    return 0;
}
