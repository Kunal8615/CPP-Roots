#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Overriding the virtual function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Another derived class
class Rectangle : public Shape {
public:
    // Overriding the virtual function
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* shapePtr; // Pointer of base class type

    Circle circle;
    Rectangle rectangle;

    // Pointing to Circle object
    shapePtr = &circle;
    shapePtr->draw(); // Calls draw() of Circle class

    // Pointing to Rectangle object
    shapePtr = &rectangle;
    shapePtr->draw(); // Calls draw() of Rectangle class

    return 0;
}
