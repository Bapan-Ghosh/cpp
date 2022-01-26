/* Find the last occurence of a number in an array */
#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int a[], int n, int key)
{
    if(n == 1)
      return -1;

    if(a[n] == key)
       return n;      
    return  lastOccurence(a, n-1, key);
}

int main()
{
    int a[] = {4, 2, 1, 2, 5, 2, 7};
    int len = sizeof(a) / sizeof(a[0]);
    cout<<"Enter the key ";
    int key;
    cin>>key;
    cout << lastOccurence(a, len-1,key);
    return 0;
}