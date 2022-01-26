#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[50];
    cout<<"Enter the String ";
    int len = strlen(s) -1;
    gets(s);
    int mx = -1;
    int currlen = 0;
    int i = 0;
    while(i < len)
    {
        if(s[i] == '\0' || s[i] == ' ')
        {
            mx = max(mx,currlen); 
            currlen = 0; 
        }
        else
        {
          currlen++;
        }
        i++;
    }
    cout<<mx;
}