//OctalToDecimal
#include<bits/stdc++.h>  //all header files are included in it
#include <iostream>
using namespace std;
int BtoD(int n)
{
   int l = 1;
   int sum=0;
   int r;
   while(n != 0)
   {
       r=n%10;
       sum+=(l*r);
       l=l*8;
       n=n/10;
   }
   return sum;   
}
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    cout<<"Result "<<BtoD(n);
    return 0;
}