/* Find the first of a number in an array */
#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int a[], int n, int i, int key)
{
    if (i == n)
        return -1;

    if (a[i] == key)
        return i;

    return firstOccurence(a, n, i + 1, key);
}

int main()
{
    int a[] = {4, 2, 1, 2, 5, 2, 7};
    int i = 1;
    int len = sizeof(a) / sizeof(a[0]);
    cout<<"Enter the key ";
    int key;
    cin>>key;
    cout << firstOccurence(a, len, i, key);
    return 0;
}
