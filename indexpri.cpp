#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
   int n,flag=0;
   cin>>n;
   int * a= new int[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<n;i++)
   {
       if(i==a[i])
       {
        cout<<a[i]<<" ";
        flag=1;
       }

   }
   if(flag==0)
    cout<<"-1";
}
