#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 5, 1, 4, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Insertion Sort
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;

        // Peeche wale elements ko shift karo jab tak key se bade hain
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // shift element to the right
            j--; // move one step left
        }

        // Key ko correct position pe daal do
        arr[j + 1] = key;
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}
