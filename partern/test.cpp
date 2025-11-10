#include <iostream>
using namespace std;

void printMiddleStarPyramid(int height) {
   for (int i = 0; i < height; i++)
   {
    //sp
    for (int j =height-i ; j >= 0; j--)
    {
        cout<<" ";
    }
      //sp
    for (int k = 1; k <= 2*i -1 ;k++)
    {
        cout<< "*";
    }
    cout<<endl;
    
   }
   
}

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height; // User input for height
    printMiddleStarPyramid(height); // Call the function
    return 0;
}
