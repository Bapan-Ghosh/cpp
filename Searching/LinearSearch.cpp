//Linear search
#include <iostream>
using namespace std;
void getData(int n, int a[])
{
    cout<<"Enter the elements \n";
    for(int i =0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

int lSort(int key,int n,int a[])
{
   for(int i=0 ; i<n ; i++)
   {
       if(a[i]==key)
           return i;
   }
   return -1;
}

int main()
{
    int n,key,res;
    cout << "Enter the no. of elements : ";
    cin >> n;
    int a[n];
    getData(n, a);
    cout<<"Enter the value to search : ";
    cin>>key;
    res=lSort(key,n,a);
    if(res ==-1)
       cout<<"Key is not found ";
    else
       cout<<"Key is present at position "<<res+1 ;
    return 0;      
}