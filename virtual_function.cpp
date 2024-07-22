/*
Ab virtual functions ki baat karte hain. Virtual function kaafi interesting 
concept hai. Yeh woh functions hote hain jo base class mein hoti hain lekin
derived class mein override ki ja sakti hain. Virtual functions se hum polymorphic
 behavior achieve karte hain, matlab ek pointer ya reference ke zariye alag-alag 
 objects ko ek jaise treat kar sakte hain.
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class se display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class se display" << endl;
    }
};

int main() {
  //  Base* ptr;
 //   Derived obj;
  //  ptr = &obj;
  Base *obj = new Derived();
  obj->display();

 //  ptr->display(); // Output "Derived class se display" hoga
 Derived b ;
 b.Base::display();
}
