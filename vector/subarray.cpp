#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;

    // Read the number of arrays
    cin >> n;

    // Create a vector of vectors to represent the 2D array
    vector<vector<int>> arrays;

    // Populate the 2D array
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k; // Size of the current sub-array

        // Create a sub-array and add it to the 2D array
        vector<int> subArray(k);
        for (int j = 0; j < k; ++j) {
            cin >> subArray[j];
        }

        arrays.push_back(subArray);
    }

    // Read the number of queries
    cin >> q;

    // Process the queries
    for (int query = 0; query < q; ++query) {
        int i, j;
        cin >> i >> j;

        // Print the value at the specified indices
        cout << arrays[i][j] << endl;
    }

    return 0;
}
