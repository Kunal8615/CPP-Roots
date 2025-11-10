
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
};

int main()
{

    int arr[6] = {9, 4, 3, 5, 7, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int half = arr_size / 2;
    for (int i = 0; i < arr_size - 1; i++)
    {
        for (int j = i + 1; j < arr_size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    int p = half;
    int q = arr_size - 1;

    while (p != q)
    {
        swap(arr[p], arr[q]);
        ++p;
        --q;
    }

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i];
    }
    return 0;
}