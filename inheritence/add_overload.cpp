#include <iostream>
#include"bits/stdc++.h"
using namespace std;

class num{
    int count;
    public:
    num(){
        count = 0;
    }

     void operator ++(){
    ++count;

    }

    void dis(){
        cout<<count<<endl;
    }
};

int main(){
    num obj1;
    obj1.dis();
    ++obj1;
     obj1.dis();
}
