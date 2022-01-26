//Insertion Sort
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

void insertionSort(int a[], int n)
{
    for(int i =1 ; i<=n-1 ; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while(temp < a[j] && j>=0)
        {
            a[j+1] = a[j] ;
            j--;
        }
        a[j+1] = temp;
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
    insertionSort(a, n);
    cout << "Array elements after sorting " << endl;
    showData(a, n);
    return 0;
}