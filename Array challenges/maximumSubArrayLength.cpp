// video - 8.4 longest arithmetic subarray
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of array ";
    cin >> n;
    int a[n];
    cout << "Enter ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pd = a[1] - a[0]; //previous common difference
    int current = 2;      // current is set to 2 because minimum 2 subarrays will be there
    int ans=2;
    int j = 2;
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            current++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout << ans << endl;
}
