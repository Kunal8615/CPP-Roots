#include <iostream>
using namespace std;


int main()
{
    int arr[6] = {1, 2, 3, 4, 5,6};
    int size = 6-1;
    int karr[6];

    for (int i = 0; i <= size; i++)
    {
        karr[(i+2)%6] =arr[i];
    }
    

     for (int i = 0; i < size; i++)
    {
       cout<< " "<<karr[i];
    }
    
    
}
