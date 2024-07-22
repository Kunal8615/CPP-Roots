#include <iostream>
using namespace std;

class a {
public:
void print(){
    cout<<"funA";
}
};
class b {
    public:
    void print1(){
        cout<<"funB";
    }

};
class c :public a,public b{

};

int main(){
 c obj1;
 obj1.print();
 obj1.print1();

}