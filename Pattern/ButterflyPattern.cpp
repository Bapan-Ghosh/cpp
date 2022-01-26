/* ButterflyPattern

*          *
**        **
***      ***
****    ****
*****  *****
************
************
*****  *****
****    ****
***      ***
**        **
*          *                                                                                    */
         
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int space=1;space<=(2*n-2*i);space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    ///mirror part
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int space=1;space<=(2*n-2*i);space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


////2nd method
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of rows :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i; j < 2 * n +(-2 - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i; j < 2 * n - 2 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}