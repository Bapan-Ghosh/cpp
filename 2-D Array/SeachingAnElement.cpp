//2-D Array video 9.1
//Searching an element in 2-D array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the row no. ";
    cin>>n;
    cout<<"Enter the coloumn no. ";
    cin>>m;
    cout<<"Enter the matrix elements "<<endl;
    int a[n][m];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
           cin>>a[i][j];
        }
    }
    
    int k;
    int f=0;
    cout<<"Enter the element to search ";
    cin>>k;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
           if(a[i][j] == k)
           {
               cout<<"row "<<i<<"column "<<j<<endl;
               f=1;
               break;
           }    
        }
    }
    if(f)
    {
        cout<<"Element is present ";
    }
    else
    {
        cout<<"Element is not present ";
    }
    return 0;
}