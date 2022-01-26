/*video 8.6
  Find the subarray in an array which has maximum sum*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements : "; // Time complexity O(n^3)
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=i ; j<n ; j++)
    //     {
    //         int sum = 0;
    //         for(int k=i ; k<=j ; k++)
    //         {
    //             sum+=a[k];
    //         }
    //         maxx=max(maxx,sum);
    //     }
    // }

    int maxx = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) /* Time complexity O(n) */
    {
        if (a[i] < 0)
        {
            sum = 0;
        }
        else
        {
            sum += a[i];
            maxx = max(maxx, sum);
        }
    }
    cout << maxx;
}