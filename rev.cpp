#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   char * a= new char[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=n-1;i>=0;i--)
    cout<<a[i];
}
