#include <iostream>
using namespace std;

class a {
public:
void print(){
    cout<<"fun7";
}
};
class b :public a {
    public:
    void print1(){
        cout<<"funB";
    }

};
class c :public b{
    public:
    void print(){
    cout<<"func";
}

};

int main(){
 c obj1;

obj1.print();
obj1.a::print();

}