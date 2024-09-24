#include <iostream>
using namespace std;

void printMiddleStarPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // New line after each row
    }
}

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height; // User input for height
    printMiddleStarPyramid(height); // Call the function
    return 0;
}
