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
    cout << "partern";
    cout << endl;

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
    cout << "partern";
    cout << endl;
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
    cout << "partern";
    cout << endl;

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

void partern6(int n)
{
    cout << "partern";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void partern7(int n)
{
    cout << "partern";
    cout << endl;
    // priyamid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && (j <= n + (i - 1)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void partern8(int n)
{

    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


void partern9(int n)
{
    // Upper part of the diamond
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond (using pattern8 function)
    partern8(n);
}

void partern10(int n){
for (int i = 1; i < n; i++)
{
    for (int j = i; j <=n; j++)
    {
        cout<<" ";
    }
    for (int j = 1; j <= (2*i-1); j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
    
}

 for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
int main()
{
    partern3(5);
    cout<<endl<<"___________________"<<endl;
    
    partern4(5);
     cout<<endl<<"___________________"<<endl;
    partern5(5);
     cout<<endl<<"___________________"<<endl;
    partern6(5);
     cout<<endl<<"___________________"<<endl;
    partern7(5);
     cout<<endl<<"___________________"<<endl;
    partern8(5);
     cout<<endl<<"___________________"<<endl;
    partern10(5);

    return 0;
}