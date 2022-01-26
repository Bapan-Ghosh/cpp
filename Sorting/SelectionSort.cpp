//Selection Sort
#include <iostream>
using namespace std;

void getData(int a[], int n)
{
    cout << "Enter the array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void showData(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j <= n-1; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the no. of array elements : ";
    cin >> n;
    int a[n];
    getData(a, n);
    cout << "Array elements before sorting " << endl;
    showData(a, n);
    selectionSort(a, n);
    cout << endl  << "Array elements after sorting " << endl;
    showData(a, n);
    return 0;
}