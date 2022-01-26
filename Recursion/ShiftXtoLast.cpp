//Move all x to the end of the string
#include<bits/stdc++.h>
using namespace std;

string replace(string s,int len,int i)
{
    static string s2= " ";
    static string s3 =" ";
    string S = " ";
    if(i == len)
       return "";
    else{
       if(s[i] == 'x')
              s2=s2+s[i];
        else
              s3+=s[i];
        }
       S = s2+ s3;
       return S;      
       return replace(s,len,i+1);
       
}

int main()
{
    string s;
    cout<<"Enter string : ";
    cin>>s;
    cout<<replace(s,s.length(),0);
    return 0;
}