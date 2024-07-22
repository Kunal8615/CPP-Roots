/*

const_cast C++ mein ek type casting operator hai, jo const 
qualifier ko add ya remove karne mein istemal hota hai. Const
 qualifier ek variable ko "constant" banata hai, jisse uski value change
  nahi ki ja sakti. Lekin kabhi-kabhi aise situations hote hain jahaan aapko temporarily
   const ko remove karna padta hai ya fir const ko add karna padta hai.
*/
#include <iostream>
using namespace std;


int main() {
    const int num1 = 42;  // Constant variable

    // const_cast ka istemal const ko remove karne ke liye
    int *ptr = const_cast<int*>(&num1);


    // Attempt to modify the value
    *ptr = 100;

    // Output: Original value of num1 (const variable)
    cout << "Original value of num1: " << num1 << std::endl;

    // Output: Modified value using const_cast
    cout << "Modified value using const_cast: " << *ptr << std::endl;

    return 0;
}
