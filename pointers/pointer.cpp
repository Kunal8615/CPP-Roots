#include <iostream>
using namespace std;

int main() {
    int num = 10; // Ek integer variable banaya
    int *ptr; // Ek pointer variable banaya, jo integer ko point karega

    ptr = &num; // Pointer ko num ke address se initialize kiya

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl; // Pointer ki value num ke address ke barabar hogi
    cout << "Value pointed to by ptr: " << *ptr << endl; // Pointer se dereference karke num ki value print ki
    return 0;
}
