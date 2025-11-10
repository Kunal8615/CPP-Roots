#include <iostream>
using namespace std;

#define size 6

int main(){
    int a = 1;
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; j < i; j++)
        {
         cout<< a++;
        }
        cout<<endl;
        
    }
    
}