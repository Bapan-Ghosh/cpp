#include <bits/stdc++.h>
using namespace std;

void subArray(int a[], int n)
{
    int count =2;
    int mx=2;
    int pd=a[1]-a[0];
    for(int i=1 ; i<n-1 ; i++){
        if(pd == a[i+1]-a[i]){
           count++;
           mx=max(mx,count);
        }
        else{
            count=2;
            pd=a[i+1]-a[i];
        }
    }
    cout<<mx;
}
int main()
{
    int n;
    cout << "Enter the no. of array elements :";
    cin >> n;
    cout << "Enter the array elements ";
    if (n == 2)
       cout<<"2";
    else if(n>2)  
    {
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        subArray(a, n);
    }
    else
      cout<<"must be greater than 1";
    return 0;
}