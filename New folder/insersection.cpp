#include <iostream>
using namespace std;


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 9, 10, 11};
    int sizearr = sizeof(arr) / sizeof(arr[0]) - 1;
    int sizearr2 = sizeof(arr2) / sizeof(arr2[0]) - 1;
    int arr3[100];
    int arr3size = 0;

   for (int i = 0; i < sizearr; i++)
   {
        arr3[arr3size++] = arr[i];
   }
   for (int i = 0; i < sizearr2; i++)
   {
        arr3[arr3size++] = arr2[i];
   }
   
   

    for (int i = 0; i < arr3size; i++)
    {
       cout<< " "<<arr3[i];
    }
    
    
    return 0;
    
}