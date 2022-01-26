/*0-1 pattern
  1    
  01   
  101  
  0101 
  10101                                                                              */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int sum=i+j;
            if(sum%2==0)
              cout<<"1";
            else
              cout<<"0";  
        }
        cout<<endl;
    }
}    