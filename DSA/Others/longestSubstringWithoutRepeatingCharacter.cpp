// video number 91
#include <bits/stdc++.h>
using namespace std;

int longSub(string s)
{
    int *visited = new int[256];
    fill(visited, visited + 256, 0);
    int mx = INT_MIN, res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int in = (int)s[i];
        if (visited[in] == 0)
        {
            visited[in]++;
            res++;
        }
        else
        {
            mx = max(mx, res);
            res = 0;
            i = i - 1;
            fill(visited, visited + 256, 0);
        }
        mx = max(mx, res);
    }
    return mx;
}

int main()
{
    string s;
    cout << "Enter the input : ";
    cin >> s;
    cout << longSub(s);
    return 0;
}