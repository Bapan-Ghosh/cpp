/*sum of subarrays*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements : ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++)
    {   int sum = 0;
        for(int j=i ; j<n ; j++)
        {   
            sum+=a[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}    