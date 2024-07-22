
#include "bits/stdc++.h"
#include <iostream>
using namespace std;

class number
{
private:
    int img, real;

public:
    number(int r, int i)
    {
        real = r;
        img = i;
    };
     number()
    {                     
    };

    number operator+(const number &obj)
    {
        number result;
        result.img = img + obj.img;
        result.real = real + obj.real;
        return result;
    }

    void display(){
        cout<<real<<" "<<img<<"i";
    }
};

int main()
{
    number c1(10,5),c2(5,6);
    number c3 = c1 +c2;
    c3.display();
}