//nCr = (n! / r! * (n-r)!)

#include <iostream>
using namespace std;
int fact(int k)
{
    int fact = 1;
    for (int i = 1; i <= k; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r, res;
    cout << "Enter the value of n and r";
    cin >> n >> r;
    res = (fact(n) / (fact(r) * fact(n - r)));
    cout << "nCr = " << res;
    return 0;
}