#include <iostream>
using namespace std;


class demo{
    private:
    int sal;
    int loan;
    public:
    demo(int s,int l){
        sal = s;
        loan = l;
    }
    void dispaly(){
        cout<<"salary:- "<<sal<<endl<<"loan :- "<< loan;
    }
    
};

int main(){
    demo obj(1000,2000);
 //   obj(1000,2000);
    obj.dispaly();
}