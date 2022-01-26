/*Record Breaker*/
/* It was my logic*/
#include <bits/stdc++.h>
using namespace std;

void record(int a[], int n)
{
    a[n] =INT_MIN;
    int count=0;
    int mx = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(a[i]>a[i+1] && a[i] >mx){
           
            count++;
            cout<<mx<<" ";
        }
         mx=max(mx,a[i]);
    }
    cout<<endl<<count;
}
int main()
{
    int n;
    cout << "Enter the no. of array elements :";
    cin >> n;
    
    if (n == 1)
       cout<<"1";
    else  
    {   
        cout << "Enter the array elements ";
        int *a = new int[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        record(a, n);
    }
    return 0;
}