// maximum sub array using sum kadane's algorithm
// Kadane's algorithm
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int *a = new int(n);
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int currentSum = 0;
    int mx = INT_MIN;

    for(int i=0 ; i<n ; i++){
        currentSum += a[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        mx = max(mx,currentSum);
    } 
    cout<<mx;
}