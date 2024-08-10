#include <iostream>
#include <string>
using namespace std;

string convertToBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;  
        num = num / 2;
    }
    return binary;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    string binary = convertToBinary(number);

    cout << "Binary representation of " << number << " is: " << binary << endl;

    return 0;
}
