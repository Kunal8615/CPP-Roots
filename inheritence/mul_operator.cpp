#include <iostream>
using namespace std;

class  num{
private:
    int value;
public:

    num(int val){
        value = val;
    }

    num operator*(const num &obj) const {
        return (value * obj.value);
    }
      void display() const {
        std::cout << "Value: " << value << std::endl;
    }

};
int main(){
    num obj(5);
    num obj1(3);
    num  result = obj *obj1;

    obj.display();
    obj1.display();
    result.display();
}