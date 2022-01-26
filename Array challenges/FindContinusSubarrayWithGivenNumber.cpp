// Given an unsorted array A of size N of non-negative integers, find a continuous
// subarray which adds to a given number S.

#include <bits/stdc++.h>
using namespace std;

void findContinuousSubarray(int a[], int n, int k)
{
    int i = 0, j = 1;
    int sum = a[i] + a[j];
    while (i < j)
    {
        if (sum == k)
        {
            cout << "From position " << i + 1 << " To " << j + 1;
            break;
        }
        else if (sum > k)
        {
            sum -= a[i];
            i++;
        }
        else if (sum < k)
        {
            j++;
            sum += a[j];
        }
    }
    cout << "NOT";
}

int main()
{
    int n;
    cin >> n;
    cout << "Enter the array elements :";
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the key :";
    cin >> k;
    findContinuousSubarray(a, n, k);
}