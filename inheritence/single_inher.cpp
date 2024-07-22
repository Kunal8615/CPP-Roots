#include <iostream>
using namespace std;

class a {
public:
void print(){
    cout<<"here is some";
}
};
class b :public a{
   void print(){
        cout<<"2nd function";
    }


};

int main(){
 b obj1;
 obj1.print();

}
