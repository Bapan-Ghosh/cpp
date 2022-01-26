/*Smallest positive missing number  
  video 8.6 last question                    */
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
    const int N = 1e6;
    bool idx[N];
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>=0)
        {
            idx[a[i]]=true;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(idx[i] != true)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}