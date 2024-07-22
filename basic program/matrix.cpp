#include <iostream>
using namespace std;

void display(int data[20][20], int row, int col) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int i, j, row, col;
    int mat[20][20];

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            cin >> mat[i][j];
        }
    }

    display(mat, row, col);

    return 0;
}
