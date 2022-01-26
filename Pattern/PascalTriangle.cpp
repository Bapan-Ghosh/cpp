/*nCr = (n! / r! * (n-r)!)
1                                       0C0         
1 1                                     1C0  1C1
1 2 1                                   2C0  2C1  2C2
1 3 3 1                                 3C0  3C1  3C2  3C3
1 4 6 4 1                                                                           */

#include <iostream>
int fact(int k)
{
    int res = 1;
    for (int j = 1; j <= k; j++)
    {
        res *= j;
    }
    return res;
}
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of rows ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (fact(i) / (fact(j) * fact(i - j))) << " ";
        }
        cout << endl;
    }
    return 0;
}
