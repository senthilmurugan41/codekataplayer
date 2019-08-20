#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   int c[300]={0};
   cin>>n;
   int * a = new int[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       c[a[i]]++;
       if(c[a[i]]>1)
        cout<<a[i]<<" ";
   }

}
