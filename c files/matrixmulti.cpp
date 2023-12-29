#include <iostream>
using namespace std;
int main()
{
    cout << "hello" << endl;
    int r1, c1;
    int r2, c2;

    cout << "enter the no of rows and columns of martrix1 A" << endl;
    cin >> r1 >> c1;
    int A[r1][c1];

    cout << "enter the no of rows and columns of martrix2 B" << endl;
    cin >> r2 >> c2;
    int B[r2][c2];

    cout << " enter the elements of matrix 1 A " << endl;
    for (int i = 0; i < r1; i++)
    {
        cout << "enter the elements of row " << i << endl;
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "enter the elements of matrix 2 B" << endl;
    for (int i = 0; i < r2; i++)
    {
        cout << "enter the elements of row " << i << endl;
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    int C[r1][c2];

    if (c1 == r1)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int k = 0; k < c2; k++)
            {
                int sum = 0;
                for (int j = 0; j < c1; j++)
                {
                    sum += A[i][j] * B[j][k];
                }
                C[i][k] = sum;
            }
        }
    }

    cout << "the matrix multiplication of two matrix is : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}