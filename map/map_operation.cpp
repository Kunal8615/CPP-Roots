#include <iostream>
#include <map>
using namespace std;

int main() {
    // Map declaration
    map<int, string> myMap;

    // Insertion
    myMap[1] = "Apple"; // Direct assignment
    myMap.insert(pair<int, string>(2, "Banana")); // Using insert function
    myMap.insert({3, "Cherry"}); // Another way using initializer list

    // Accessing elements
    cout << "Element with key 1: " << myMap[1] << endl;
    cout << "Element with key 2: " << myMap.at(2) << endl; // Using at() function

    // Iterating through the map
    cout << "Map elements are:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Finding an element
    auto it = myMap.find(2);
    if (it != myMap.end()) {
        cout << "Found element with key 2: " << it->second << endl;
    } else {
        cout << "Element with key 2 not found" << endl;
    }

    // Deleting an element
    myMap.erase(1); // Using key
    it = myMap.find(3);
    if (it != myMap.end()) {
        myMap.erase(it); // Using iterator
    }

    // Checking size
    cout << "Map size after deletion: " << myMap.size() << endl;

    // Checking if map is empty
    if (myMap.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    // Clearing the entire map
    myMap.clear();
    cout << "Map size after clearing: " << myMap.size() << endl;
    return 0;
}
