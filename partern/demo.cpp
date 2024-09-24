#include <iostream>
using namespace std;

void para(int n)
{
    int i, j;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int col = (2 * n - i) - 1;
        if (i < n)
        {

            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }
        else if (i >= n)
        {

            for (int j = 1; j <= col - 1; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
};

void para2(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int space = i+1;
        
        for (j = 0; j < space; j++){
            cout<<" ";
        }
        
        for (j = 0; j < n - i; j++)
        {
            cout<<"*";
        }
    cout << endl;
    }
}

int main()
{
   // para(5);
   para2(5);
    return 0;
}