//Binary search
#include <iostream>
using namespace std;
void getData(int n, int a[])
{
     cout<<"\n........Elements must be sorted order ..........\n";
    cout << "Enter the elements \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int binarySearch(int key, int n, int a[])
{
    int lb, ub,mid;
    lb = 0;
    ub = n - 1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (key == a[mid])
            return mid;
        else if (key > a[mid])
               lb = mid + 1;
            else
               ub = mid -1;
    }
    return -1;
}

int main()
{
    int n, key, res;
    cout << "Enter the no. of elements : ";
    cin >> n;
    int a[n];
    getData(n, a);
    cout << "Enter the value to search : ";
    cin >> key;
    res = binarySearch(key, n, a);
    if (res == -1)
        cout << "Key is not found ";
    else
        cout << "Key is present at position " << res + 1;
    return 0;
}