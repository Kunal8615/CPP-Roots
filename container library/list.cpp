#include <iostream>
#include <list>
using namespace std;

int main(){
     //LIST
 list<int> lst;
 lst.push_back(10);
 lst.push_back(11);

 for(int i :lst){
    cout<<" "<<i<<endl;
 }

}
