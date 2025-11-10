#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp =a;
    a =b;
    b = temp;
};

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int odd[100];
    int oddsize = 0;
    int evensize = 0;
    int even[100];

    for (int i = 0; i < 8; i++)
    {
       if(arr[i]%2==0){
            even[evensize++] = arr[i];
       }else{
         odd[oddsize++] = arr[i];
       }
    }

    for (int i = 0; i < oddsize; i++)
    {
        cout<<odd[i];
    }
    return 0;
    
    
}