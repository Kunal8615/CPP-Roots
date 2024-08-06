#include <iostream>
using namespace std;


void partern(int n){
    for(int i =1; i>=(2*n-1); i++){
        int col = (2*n-i-1);
        if(i<=n){
            for(int j =1;j<=i ; j++){
                    cout<<"*";
            }
        }
        else if (i>=n)
        {
             for(int j =1;j<= col ; j++){
                    cout<<"*";
            }
        }
        cout<<endl;
        
    }
    }
int main(){

partern(5);
return 0;
}