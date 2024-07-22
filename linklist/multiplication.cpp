#include <iostream>
using namespace std;

int i, j;


 void matrixAddition(int mat1[][10], int mat2[][10], int mat3[][10]) {
        int i, j;

        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
        }
        return;
  }
/*void some(int a[][10],c[10][10])
{
    int i, j;
    int re[100][100];
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            re[i][j] = (c[i][j] + a[i][j]);
        }
    }

    /// disply

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            cout << re[i][j];
        }
        cout << endl;
    }
}

*/
void display(int a[100][100], int row, int col)
{

    cout << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void matrix(int a[100][100], int row, int col)
{
    int i, j;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "Enter A[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
    }
}

int main()
{
    int r[100][100];
    int p[100][100];
    int t[100][100];
    matrix(r, 3, 3);
    matrix(p, 3, 3);
    display(r, 3, 3);
    display(p, 3, 3);
 matrixAddition(p,r,t)
 display(t, 3, 3);
}