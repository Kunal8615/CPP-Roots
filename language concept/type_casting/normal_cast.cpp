#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

    int x = 10;
    int *ptr ;
    ptr= &x;
    float b = x;
    cout<<typeid(b).name();
    float c = static_cast<float>(x); 
     cout<<typeid(c).name();
     cout<<ptr;
}