#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[50];
    char s1[50];
    cout<<"Enter the string : "<<endl;
    gets(s);
    int len = strlen(s) -1;
    for(int i=len, j=0 ; i>=0,j< len; i--,j++)
    {
         s1[j] = s[i];
    }
    int f=1;
    for(int i=0 ;i<len ; i++)
    {
        if(s[i] != s1[i])
          {
              f=0;
              break;
          } 
    }

    if(f ==1)
      cout<<"Given no. is a palindrom number ";
    else
      cout<<"Given no. is not a plaindrom no. ";  
    return 0;
}