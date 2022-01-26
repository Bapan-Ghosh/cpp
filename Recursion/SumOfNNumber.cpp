#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
   if(n == 1 || n == 0)
     return n;
   else
     return (n + sum(n - 1));
       
}
int main()
{
   int n;
   cout<<"Enter : ";
   cin>>n;
   cout<<sum(n);
   return 0;
}