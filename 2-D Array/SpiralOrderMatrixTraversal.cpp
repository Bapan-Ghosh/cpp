//Spiral order matrix traversal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the row no. ";
    cin >> n;
    cout << "Enter the coloumn no. ";
    cin >> m;
    cout << "Enter the matrix elements " << endl;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1, row, col;
    while (row_start <= row_end && col_start <= col_end)
    {
        //for row start
        for (col = col_start; col <= col_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        row_start++;
        //for column end
        for (row = row_start; row <= row_end; row++)
        {
            cout << a[row][col_end] << " ";
        }
        col_end--;
        //for row end
        for(col = col_end ; col >= col_start ; col--)
        {
            cout << a[row_end][col] <<" ";
        }
        row_end--;
        //for column star
        for(row = row_end ; row >= row_start ; row--)
        {
            cout << a[row][col_start] << " ";
        }
        col_start++;
    }
    return 0;
}