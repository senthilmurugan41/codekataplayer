#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int * a= new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<k;i++)
  {
      swap(a[i],a[i+1]);
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
