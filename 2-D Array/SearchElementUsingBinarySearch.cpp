//Given element is present in the matrix or not
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
    cout<<"Enter the matrix elements \n";
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin >> a[i][j];
        }
    }
    int k;
    cout<<"Enter the element to search ";
    cin>>k;
    bool found=false; 
    int r = 0, c = m-1;
    while(r < n && c>=0)
    {
        if(a[r][c] == k)
        {
            found = true;
            break;
        }
        else 
          if(a[r][c] > k)
             c--;
          else
            r++;   
    } 
    if(found)
       cout<<"present ";
    else
       cout<<"not present";   
    return 0;
}