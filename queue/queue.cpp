#include <iostream>
using namespace std;
// FIFO -- FIRST IN FIRST OUT
#define size 3

class queue {
    int *arr;
    int front;
    int back;

public:
    queue() {
        front = -1;
        back = -1;
        arr = new int[size];
    }

    void enque(int value) {
        if (back == size - 1) {
            cout << "Queue is full" << endl;
           // return;
        }
        back = back + 1;
        arr[back] = value; // Value ko array mein store karna
        if (front == -1) {
            front = front + 1;
        }
    }

    void deq() {
        if (front == -1 || front > back) {
            cout << "Queue is empty" << endl;
          //  return;
        }
        front++;
    }

    int peek() {
        if (front == -1 || front > back) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        if (front == -1 || front > back) {
            return true;
        }
        return false;
    }
};

int main() {
    queue a;
    a.enque(5);
    a.enque(6);
    a.enque(7);

    cout << "Front element: " << a.peek() << endl;

    a.deq();
    cout << "Front element after one dequeue: " << a.peek() << endl;

    a.deq();
    a.deq();
    cout << "Queue empty: " << a.empty() << endl;

    return 0;
}
