#include <iostream>
using namespace std;

void pattern(int n) {
    int middle = (n / 2) + 1;
    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == middle && j == middle) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main() {
    pattern(5);
    return 0;
  
}
