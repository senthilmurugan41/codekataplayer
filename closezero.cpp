#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int * a= new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
          if(floor(abs(a[i]+a[j]))==0)
            cout<<a[i]<<" "<<a[j];
       }
   }
}
