#include <iostream>
using namespace std;


class animal{
    public:
    virtual void sound(){
        cout<<"  animal sound "<<endl;
    }
};
class dog :public animal{
    public:
    void sound()override{
    cout<<" dog sound";

    }
};

class cat:public animal{
    public:
    void sound()override{
    cout<<"cat sound";

    }
};

int main(){
    animal *demo;
    dog d;
    demo = &d;
    demo->sound();

    

}