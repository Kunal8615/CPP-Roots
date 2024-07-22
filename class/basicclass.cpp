#include <iostream>
#include <string>
using namespace std;

class student{
    private:
    string name;
    int mark;
    public:
 /*   student(string n , int m){
        name = n;
        mark = m;
    }
    
*/
    void names(string n , int m){
        name = n;
        mark = m+1000;

    }

    void display(){
        cout<<" name "<<name<<endl<<"marks "<<mark;
    }
};

int main(){
   student s1;
   s1.names("saada",42);
   s1.display();
  

}