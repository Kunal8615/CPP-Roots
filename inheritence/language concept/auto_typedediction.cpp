/*

"auto" C++ programming language mein ek feature hai jo 
automatic type deduction ko represent karta hai. Iska main use variable declaration
 mein hota hai, jismein compiler apne aap type ko detect kar
  leta hai based on the assigned value.
*/

#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // auto ka use iterator ke liye
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        // ...
    }

    return 0;
}