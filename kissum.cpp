#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
   int n,k,flag=0;
   cin>>n>>k;
   int * a= new int[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n-1;j++)
       {
           if(a[i]+a[j]==k)
           {
               cout<<"yes";
               flag=1;
           }
       }
   }
   if(flag==0)
    cout<<"no";
}
