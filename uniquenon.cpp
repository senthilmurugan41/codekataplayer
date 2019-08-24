#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,x[100],ma=1,z=0;
    cin>>n;
    int * a= new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   for(int i=0;i<n;i++)
   {
     int j;
      for( j=0;j<n;j++)
      {
          if(i!=j&&a[i]==a[j])
            break;
      }
       if(j==n)
        cout<<a[i];
   }
}
