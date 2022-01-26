#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx=0;
    int a[]={0,-9,1,3,-4,5};
    int n=6;
    for(int i=0;i<n;i++)
    {
        mx=max(a[i],mx);
        cout<<mx<<" ";
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

// int main(){
//     int b=97;
//     int a[]={40,105,88};
//      int n=3;
//        for(int i=0;i<n;i++){
//            cout<<max(a[i],b)<<" ";
//        }
//     return 0;      
// }