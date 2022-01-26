//HalfPyramidUsingNumbers
/*   1       
     22      
     333     
     4444    
     55555                                                           */
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the no. of rows ";
    cin>>n;
    cout<<"Pattern "<<endl;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}