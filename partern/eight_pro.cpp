#include <iostream>
using namespace std;

void printPattern(int n) {
    int middle = (n / 2) + 1;

   
    for (int i = 1; i <= middle; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i || j > n - i) {
                cout << "*";
            } 
            else if (i==1){
                cout<<"*";
            }else {
                cout << " "; 
            }
        }
        cout << endl;
    }

 
    for (int i = middle - 1; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j <= i || j > n - i) {
                cout << "*"; // Print stars on left and right
            } 
            
            else if (i==1){
                cout<<"*";
            }
          
            
            else {
                cout << " "; // Print spaces in between
            }
        }
        cout << endl;
    }
}

int main() {
    int size = 7; // Set pattern size
    printPattern(size);
    return 0;
}
