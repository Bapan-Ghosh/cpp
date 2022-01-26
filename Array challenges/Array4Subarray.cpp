/* Give an unsorted array A of size N of non negative integers, find a continuous subarray which
   adds to a given no. s*/

   #include<bits/stdc++.h>
   using namespace std;

   int main()
   {
       int n,s;
       cout<<" enter n : ";
       int a[n];
       for(int i=0 ; i<n ; i++)
       {
           cin>>a[i];
       }
       cout<<"Enter s";
       cin>>s;
       int i=0, j=0, sum=0, st=-1, en=-1;
       while(j<n && sum+a[j]<=s)
       {
           sum+=a[j];
           j++;
       }
       if(sum==s)
       {
         cout<<i+1<<" "<<j;
         return 0;
       }
       while(j<n)
       {
           sum+=a[j];
       }
   }