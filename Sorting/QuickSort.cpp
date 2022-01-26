//Quick Sort
//From Anuj Bhaiya's video(algo+concept)
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

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int l, int r)
{
    int pivot = a[l];
    int i = l;
    int j = r;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(a,i,j);
        }
    }
    swap(a,l,j);
    return j;
}

void quickSort(int a[], int l, int r)
{
   if(l<r){
       int position =partition(a,l,r);
       quickSort(a,l,position-1);
       quickSort(a,position+1,r); 
   }   
}

int main()
{
    int n;
    cout << "Enter the no. of array elements : ";
    cin >> n;
    int *a = new int(n); //dynamic memory allocation
    getData(a, n);
    cout << "Array elements before sorting " << endl;
    showData(a, n);
    quickSort(a, 0, n-1);
    cout << endl  << "Array elements after sorting " << endl;
    showData(a, n);
    return 0;
}