#include <iostream>
using namespace std;

void partern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void partern2(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void partern3(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void partern4(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void partern5(int n)
{

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
}



int main()
{

    // partern1(5);
    partern5(9);
    return 0;
}