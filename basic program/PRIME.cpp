#include <iostream>
using namespace std;
int main()
{

int n = 10;
int i;
int j;
int count;
for(i = 1; i <= n; i++){
    count = 0;
    for(j = 1; j <= n; j++){
            if (i % j == 0)
            {
                //  cout << i;
                count += 1
            }
        }
        if (count == 2)
        {
            cout << i
        }
    }
    return 0;
}
