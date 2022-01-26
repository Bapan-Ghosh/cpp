//PairSumProblem
#include <bits/stdc++.h>            //Time complexity O(n^2)
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of elements ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the key ";
    cin >> k;
    int f = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << a[i] << " + " << a[j] << " = " << k;
                return 0;
            }
            else
            {
                f = 1;
            }
        }
    }
    if (f == 1)
    {
        cout << "Not present ";
    }
    return 0;
}