/*Floyd'sTriangle
  1        
  2 3      
  4 5 6    
  7 8 9 10   
  11 12 13 14 15                                                  */
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter the no. of rows ";
    cin >> n;
    cout << "Pattern " << endl;
    for (i = 1; i <= n; i++)
    {
        static int k = 1;
        for (j = 0; j < i; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
    return 0;
}