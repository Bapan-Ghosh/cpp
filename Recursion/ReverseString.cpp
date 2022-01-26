#include<bits/stdc++.h>
using namespace std;

void rev(string s,int i)
{
    if(i == -1)
       return ;
    else
      cout<<s[i];
      return rev(s,i-1);   
}

int main()
{
    string s;
    cout<<"input de banchod :"<<endl;
    cin>>s;
    int i=s.length();
    cout<<"Output dakh banchod :"<<endl;
    rev(s,i);
}