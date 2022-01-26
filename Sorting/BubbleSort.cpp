//Bubble Sort
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

void bubbleSort(int a[], int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j =0  ; j<=n-2-i ; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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
    bubbleSort(a, n);
    cout << "Array elements after sorting " << endl;
    showData(a, n);
    return 0;
}