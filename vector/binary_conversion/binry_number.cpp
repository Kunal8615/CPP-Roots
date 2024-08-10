
#include <iostream>
#include <string>
using namespace std;

int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr;

    // Binary string ko integer me convert karna
    int number = stoi(binaryStr, 0, 2);

    cout << "The decimal representation of binary " << binaryStr << " is: " << number << endl;

    return 0;
}
