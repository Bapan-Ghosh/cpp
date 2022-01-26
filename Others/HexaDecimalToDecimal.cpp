//HexaDecimalToDecimal
#include <bits/stdc++.h> //all header files are included in it
#include <iostream>
using namespace std;
int HtoD(string s)
{
    int ans = 0;
    int x=1;
    int l=s.size();
    for (int i = l-1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans += x * (s[i]-'0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans += x*(s[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
int main()
{
    string n;
    cout << "Enter the number ";
    cin >> n;
    cout << "Result " << HtoD(n);
    return 0;
}
