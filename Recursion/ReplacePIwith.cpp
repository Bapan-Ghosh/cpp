#include <bits/stdc++.h>
using namespace std;

void replace(string s, int len, int i)
{
    if (i == len)
        return;
    else if (s[i] == 'p' && s[i+1] == 'i')
    {
        cout << "3.14" ;
        return replace(s, len, i+2);
    }
    else
        cout << s[i];
    return replace(s, len, i+1);
}

int main()
{
    string s;
    cout << "input de banchod :" << endl;
    cin >> s;
    int len = s.length() ;
    int i = 0;
    cout << "Output dakh banchod :" << endl;
    replace(s, len,i);
}