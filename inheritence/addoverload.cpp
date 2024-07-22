#include <iostream>
using namespace std;

class de{
    private:
    int x;
    public:

    de(int a){
        x= a;
    }
    de operator+(const de &obj)const{
        return de(x + obj.x);
   
    }

    void display(){
        cout<<x;
    }

};
int main(){
    de q(5);
    de p(5);
    de re = p+q;
    re.display();
}