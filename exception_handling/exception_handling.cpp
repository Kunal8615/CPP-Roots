/*

Bhai, C++ mein exception handling ek mechanism hai jo runtime errors ke saath deal
 karne mein madad karta hai. Jab kisi unexpected situation ya error ki condition aati
  hai, toh exception handling se aap apne program ko gracefully terminate nahi hone 
  dene ke liye code likh sakte hain.

C++ mein exception handling ke liye primarily do keywords ka istemal hota hai: try aur catch.

1. try:

try block ke andar woh code likha jata hai jisme exception occur hone ki possibility hoti hai.
Exception throw hone par control try block se catch block mein transfer hota hai.
2. catch:

catch block woh code hota hai jo exception ko handle karta hai.
try block ke andar agar koi exception occur hoti hai, toh matching catch block mein control transfer hota hai.
3. throw:

throw keyword ka use kiya jata hai to explicitly ek exception throw karne ke liye.
Exception throw hone par control try block se nearest matching catch block mein jata hai.

*/

#include <iostream>
using namespace std;

void sum(int a, int b){
    int c;
    if(a ==7){
        throw " error hai bhai";
    }
    c= a+b;
    cout<<c;
}

int main(){

    try{
        sum(7,5);
    } 
    catch(const char* errorMessage) {
        cout<< "kuch gadbad hai" <<errorMessage<< endl;
    }
}