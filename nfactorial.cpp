#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  int n,f=1;
  cin>>n;
  for(int i=1;i<=n;i++)
    f*=i;
  cout<<f;
}

