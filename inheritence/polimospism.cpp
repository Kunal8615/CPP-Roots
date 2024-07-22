

/*Bhai, polymorphism ek object-oriented programming concept hai,
 jisme ek entity ko multiple forms mein express kiya ja sakta hai.
  "Poly" matlab "many" aur "morph" matlab "forms", isliye polymorphism
   ka matlab hota hai "many forms". C++ mein, polymorphism ko do tareeqon 
   se implement kiya ja sakta hai: compile-time polymorphism (static polymorphism) 
   aur run-time polymorphism (dynamic polymorphism).

Compile-time Polymorphism (Static Polymorphism):

Compile-time polymorphism ko function overloading ke through achieve kiya
 jata hai. Function overloading mein ek class ke andar do ya do se zyada 
 functions hote hain, lekin unke names same hote hain lekin parameters alag hote hain.
Compiler compile-time par decide karta hai ki kaunsa function call hoga 
based on function name aur parameters.

Run-time Polymorphism (Dynamic Polymorphism):

Run-time polymorphism ko function overriding ke through achieve kiya jata
 hai. Function overriding mein ek derived class apne base class ke ek virtual 
 function ko redefine karti hai.
Run-time par, object ki actual type ke hisab se decide hota hai ki kaunsa function call hoga.

*///
#include <iostream>
#include"bits/stdc++.h"
using namespace std;

class box{
    public:
    void fun(){
        cout<<"function 1"<<endl;
    }

    void fun(int x){
        cout<<"function 2"<<endl;
    }
    void fun(double y){
       cout<<"function 3"<<endl;
  }
};
int32_t main(){
        box obj1;
        obj1.fun();
        obj1.fun(5);
        obj1.fun(5.88);

}