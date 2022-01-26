#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter array elements : ";
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    int N = 10000;
    int idx[N];
    int min_index = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        idx[i] =-1;
    }
    
    for(int i=0 ; i<n ; i++)
    {
       if(idx[a[i]] !=-1)
       {
           min_index=min(min_index,idx[a[i]]);
       }
       else
       {
           idx[a[i]] = i;
       }
    }
    if(min_index == INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<min_index+1;
    }
    return 0;  
}