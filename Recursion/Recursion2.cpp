// n^p
#include<bits/stdc++.h>
using namespace std;

int calculateNpowerP(int n,int p)
{
    if(p == 0)
       return 1;
    else
       return n*calculateNpowerP(n, p-1);    
}
int main()
{
    int n,p;
    cout<<"Enter n , p : "<<endl;
    cin>>n>>p;
    cout<<calculateNpowerP(n, 2p);
}