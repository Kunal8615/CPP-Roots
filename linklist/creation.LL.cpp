#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head; // Pointer to the first node

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main() {
    LinkedList list;

    // Insert elements into the list
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    // Display the list
    cout << "Linked List: ";
    list.display();

    return 0;
}
