/*Rhombus pattern
    *****
   ***** 
  *****  
 *****   
*****                                                                                */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //for(int j=i;j<=n-1;j++)  or
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}    