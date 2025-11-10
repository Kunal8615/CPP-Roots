#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp =a;
    a =b;
    b = temp;
};

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int start = 0;
    int size = sizeof(arr) / sizeof(arr[0]) -1;
    int end = sizeof(arr) / sizeof(arr[0]) -1;
    cout<< end<<endl;
    while (start < end){
        swap(arr[start],arr[end]);
        ++start;
        --end;
    }

    for (int i = 0; i <= size; i++)
    {
       cout<<arr[i];
    }
    
    
    
}