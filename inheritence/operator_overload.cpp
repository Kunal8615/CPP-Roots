#include <iostream>
#include"bits/stdc++.h"
using namespace std;

class number{
    int count;
    public:
    
    number(){
        count = 0;
    }

    void show(){
        cout<<count<<endl;
    }

    void operator ++(){
        count = count+1;
    }

};

int main(){
number obj;
obj.show();
++obj;
obj.show();
++obj;
obj.show();
}