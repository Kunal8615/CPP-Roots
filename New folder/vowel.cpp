#include <iostream>
using namespace std;



int main(){
    char vowe[] = {'a','e','i','o','u'};
    string str = "kunaal";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
     for (int j = 0; j < 5 ; j++)
     {
       if(str[i] == vowe[j]){
        ++count;
       }
     }
     
    }
    cout<<count;
    return 0;
    
}