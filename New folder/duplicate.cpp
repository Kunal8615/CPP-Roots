#include <iostream>
using namespace std;


int main(){
    int arr[8] = {1,1,2,2,2,3,4,4};
    int newsize = 0;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int temp[10];


    for (int i = 0; i < arr_size; i++)
    {    bool flag = false;
        for (int j = 0; j < newsize; j++)
        {
            if(arr[i]==temp[j]){
                flag = true;
                break;
            }
        }

        if(!flag){
            temp[newsize] = arr[i];
            newsize++;
        }
        
    }

    for (int i = 0; i < newsize; i++)
    {
        cout<<temp[i];
    }
    return 0;
    
    
}