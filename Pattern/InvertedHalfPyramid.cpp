//InvertedHalfPyramid
/* *****
   **** 
   ***  
   **   
   *                                                            */
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter the no. of rows ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}