#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[],int n)
{ 
    if(n == 1)
         return 1;
    
    if(a[n-1] > a[n-2])
       return sorted(a,n-1);
    else
       return 0;    
}

int main()
{
   int a[] = {1,5,8,74};
   int n = sizeof(a) / sizeof(a[0]) ;
   cout<<"If sorted it will print 1 otherwise 0"<<endl;
   cout<<sorted(a, n);
   return 0;
}