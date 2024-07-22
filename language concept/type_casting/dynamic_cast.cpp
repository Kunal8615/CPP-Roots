/*

dynamic_cast bhi C++ mein ek type casting operator hai, lekin iska istemal runtime type
checking ke liye hota hai, jisse aap runtime mein object ke actual type ko determine kar sakte hain.
dynamic_cast ka syntax is tarah hota hai:

cpp
Copy code
dynamic_cast<new_type>(expression)

*/

#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "This is the Base class." << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "This is the Derived class." << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    // Using dynamic_cast to cast from Base* to Derived*
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr) {
        std::cout << "Dynamic cast successful!" << std::endl;
        derivedPtr->print();
    } else {
        std::cout << "Dynamic cast failed!" << std::endl;
    }

    delete basePtr;  // Clean up memory

    return 0;
}
