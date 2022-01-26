//Matrix multiplication
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row no." ;
    cin>>n;
    cout<<"Enter the column no. ";
    cin>>m;
    int a[n][m];
    int b[n][m];
    int c[n][m];
    cout<<"Enter the 1st matrix elements \n";
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Enter the 2nd matrix elements \n";
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin >> b[i][j];
        }
    }
    
    for(int i=0 ;i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
           c[i][j] =0; 
        }
    }
    for(int i=0 ;i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
           c[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]; 
        }
    }
    cout<< "Matrix multiplication \n";

    for(int i=0 ;i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
           cout << c[i][j] <<" "; 
        }
        cout<<endl;
    } 
    return 0;
}