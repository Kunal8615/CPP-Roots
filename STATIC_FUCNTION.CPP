#include <iostream>

class MyClass {
public:
    // Static function definition
    static void staticFunction() {
        std::cout << "This is a static function." << std::endl;
    }
};

int main() {
    // Calling static function using class name
    MyClass::staticFunction();
 
    return 0;
}