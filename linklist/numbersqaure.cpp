#include <iostream>
using namespace std;

int main()
{
    int i, k, j, l;
    int n = 10;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i <= 3)
            {
                if (i == 1 || j == n)
                {

                    cout << j;
                }
            }
        }
    }
}