#include <iostream>
using namespace std;
int main()
{
    int r, c, mat1[100][100], mat2[100][100], sum[100][100], i, j;
    cout << "\nEnter the number of rows and columns : ";
    cin >> r >> c;
    cout << "\nInput Matrix 1 elements : ";
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cin >> mat1[i][j];
        }
    cout << "\nMatrix 1\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nInput Matrix 2 elements : ";
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cin >> mat2[i][j];
        }
    cout << "\nMatrix 2\n ";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\nAdded Matrix\n";
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << sum[i][j] << " ";

            if (j == c - 1)
            {
                cout << "\n";
            }
        }

    return 0;
}
