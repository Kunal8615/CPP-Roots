#include <iostream>

class Number {
private:
    int value;

public:
    // Constructor
  //  Number(int val) : value(val) {}
  Number(int val){
    value = val;
  }

    // Overloading binary - operator
    Number operator-(const Number& other) {
        return (value - other.value);
    }

    // Function to display the value
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Creating two objects
    Number num1(20);
    Number num2(8);

    // Using overloaded binary - operator
    Number result = num1 - num2;

    // Displaying original and subtracted values
    std::cout << "Num1 ";
    num1.display();

    std::cout << "Num2 ";
    num2.display();

    std::cout << "Result ";
    result.display();

    return 0;
}
