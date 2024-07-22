#include <iostream>
using namespace std;
class cons{
    public:
    int val1,val2;
    cons(int x,int y):val1(x) ,val2(y){
        cout<<x<<"--"<<y;
        
    }
};

int main(){
    cons a(12,3);
}