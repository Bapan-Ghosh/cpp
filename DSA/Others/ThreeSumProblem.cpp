#include<bits/stdc++.h>
using namespace std;
int twoPointer(int a[],int i, int y, int key,int n);

int threeSum(int a[],int n,int key){
    sort(a,a+n);
    for(int i=0 ; i<n-2 ; i++){
        if(twoPointer(a, i+1, a[i],key,n)){
              return true;
        }
    }
    return false;
}

int twoPointer(int a[],int i, int y, int key,int n){
     int j = n -1;
     while(i<j){
         if(a[i]+a[j]+y > key){
             j--;
         }
         else
          if(a[i]+a[j]+y < key){
             i++;
          }
          else{
              return true;
          }
     }
     return false;
}

int main(){
    int n;
    cout<<"Enter the no. of elements ";
    cin>>n;
    int *a =  new int[n];
    cout<<"Enter the elements ";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int key;
    cout<<"Key";
    cin>>key;
    if(threeSum(a,n,key))
       cout<<"True";
    else
       cout<<"False";   
    return 0;
}