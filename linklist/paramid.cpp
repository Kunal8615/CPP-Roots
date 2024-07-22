#include <iostream>
using namespace std;


int main(){

int space,i,j;

int n = 20;
for(i = 1 ;i<=n;i++){
    for(space = 1 ; space<= n-i;space++){
        cout<<" ";
    }
    for(j = 1;j<=2* i -1;j++){
        printf("*");
    }
    cout<<endl;

}

}