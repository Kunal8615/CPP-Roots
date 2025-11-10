/*
friend function ka concept yeh hai ki ek class ke bahar se ek function
 ko dost bana dete hain, matlab wo function class ke private aur protected
  members ko access kar sakta hai. Friend function ko class ke andar friend 
  keyword ke saath declare kiya jata hai.
  */

 #include <iostream>
using namespace std;

class MeraClass {
private:
    int x;

public:
    MeraClass() {
        x = 45; // Constructor me value assign ki
    }

    // Friend function ko declare kiya
    friend void dostFunction(MeraClass obj);
};

// Friend function ka definition
void dostFunction(MeraClass obj) {
    cout << "x ka value: " << obj.x << endl;
}

int main() {
    MeraClass obj;
    dostFunction(obj);
    return 0;
}
