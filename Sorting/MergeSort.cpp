#include <bits/stdc++.h>
using namespace std;

void getData(int a[], int n)
{
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void printData(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void merge(int a[], int l, int mid, int r)
{
    int i, j, k;
    i = l;
    j = mid + 1;
    k = l;
    int b[50];
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    if (i > mid)
    {
        while (j <= r)
        {
            b[k++] = a[j++];
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k++] = a[i++];
        }
    }
    for (k = l; k <= r; k++)
    {
        a[k] = b[k];
    }
}

void mSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mSort(a, l, mid);
        mSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    int *a = new int(n);

    getData(a, n);
    cout << "Elements before sorting " << endl;
    printData(a, n);
    mSort(a, 0, n - 1);
    cout << "Elements after sorting " << endl;
    printData(a, n);
    return 0;
}