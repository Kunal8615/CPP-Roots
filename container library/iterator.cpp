#include <iostream>
#include <vector>
using namespace std;
int main(){
      vector<string> fruits = {"Apple", "Banana", "Orange", "Grapes"};

    // Iterator ka istemal karke har fruit ko dikhao
    for (vector<string>::iterator it = fruits.begin(); it != fruits.end(); it++) {
        cout << *it << " "; // std:: likhne ki zarurat nahi hai
    }

    return 0;
}
