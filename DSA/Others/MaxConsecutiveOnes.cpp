/* Given an array A of 0s and 1s, we may change upto k values from 0 to 1.
   Return the length of the longest(contiguous) subarray that contains only 1s 
   video no. 90*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,k;
   cout<<"Enter no. of elements :";
   cin>>n;
   cout<<"Enter the value of k :";
   cin>>k;
   cout<<"Enter the elements :";
   vector<int>a(n);
   for(auto &i : a){
      cin>>i;
   }
   int zerocnt=0, i=0, mx=INT_MIN;
   for(int j=0 ; j<n ; j++){
      if(a[j] == 0){
           zerocnt++;
      }
      while(zerocnt>k){
         if(a[i] ==0)
            zerocnt--;
         i++;   
      }
      mx=max(mx,j-i+1);  
   }
   cout<<"Output :"<<mx;
}