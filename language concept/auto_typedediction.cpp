#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // auto ka use iterator ke liye
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        // ...
    }

    return 0;
}