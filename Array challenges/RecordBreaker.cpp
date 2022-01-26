//Record Breaker
// video 8.4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of array ";
    cin >> n;
    // int a[n+1];
    int *a = new int[n+1];
    a[n] = -1;
    cout << "Enter ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int mx = -1;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            count++;
        }
        mx = max(mx, a[i]);
    }
    cout << "No. of record date " << count;
    return 0;
}
