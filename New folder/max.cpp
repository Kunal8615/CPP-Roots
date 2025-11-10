#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,4,6,97,2,67};
    int max = 0;
     int arr_size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arr_size; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
    

}