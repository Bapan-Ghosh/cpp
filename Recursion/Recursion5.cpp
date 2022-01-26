/* print numbers till n
   1. Decreasing order
   2. Increasing order
                             */
#include<bits/stdc++.h>
using namespace std;

void decreasing(int n)
{
    if(n == 0)
      return ;
    else
       cout<<n<<" ";
       decreasing(n-1);
        
}

void increasing(int n)
{
    static int i=1; 
    if(n == 0)
      return ;
    else
      cout<<i++<<" ";
      increasing(n-1);
}

int main()
{
      int n;
      cout<<" n :";
      cin>>n;
      cout<<endl<<"Decreasing order "<<endl;
      decreasing(n);
      cout<<endl<<"Increasing order "<<endl;
      increasing(n);
      return 0;
}
