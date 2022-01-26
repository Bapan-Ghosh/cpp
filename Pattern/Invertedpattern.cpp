/*Inverted pattern
1234
123 
12  
1                                                                                       */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the row number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 0; j <= n - i; j++)
        //or for (int j = i; j <= n; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}