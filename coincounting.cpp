#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
   int n,k,c=1;
   cin>>n>>k;
   int * a= new int[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
   int s=a[n-1];
   bool x=true;
   int l=1;
   while(x)
   {
       if(s+a[n-l]<=k)
       {
           c++;
           if(s+a[n-l]==k)
            x=false;
           else
            s+=a[n-l];
       }
       else
        l++;
   }
   cout<<c;
}
