#include <iostream>
#include <map>
using namespace std;

int main() {
    // Map declaration and initialization
    map<int, string> myMap;
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Cherry";

    // Accessing and printing map elements
    cout << "Map elements are:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

  
}
