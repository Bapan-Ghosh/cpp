#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three number :\n";
    cin>>a>>b>>c;
    //cin>>b;
    //cin>>c;
    if(a>b){
        if(a>c)
          cout<<"Max number :"<<a;
        else
          cout<<"Max number :"<<c;  
    }
    else
      cout<<"Max number :"<<b;
}