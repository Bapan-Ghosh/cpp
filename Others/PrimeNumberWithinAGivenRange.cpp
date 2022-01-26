#include<iostream>
using namespace std;
int main(){
    int lb,ub,i;
    cout<<"Enter the lower limit :";
    cin>>lb;
    cout<<endl<<"Enter the upper limit :";
    cin>>ub;
    while(lb<=ub){
        for(i=2;i<lb;i++){
            if(lb%i==0)
               break;
        }
        if(i==lb)
          cout<<"Given number "<<i<<" is prime"<<endl;
        lb=lb+1;  
    }
    return 0;
}