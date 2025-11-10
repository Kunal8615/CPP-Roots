#include <iostream>
using namespace std;

#define size 6

int main(){
for (int i = 1; i < size ; i++)
{
   for (int j = 1; j < size-i; j++)
   {
   cout<< " ";
   }
   for (int k = 1; k <= (2*i) -1 ; k++)
   {
    cout<<"*";
   }
   cout<<endl;
   
   
}

}