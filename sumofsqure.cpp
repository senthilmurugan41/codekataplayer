#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  int n,s=0;
  cin>>n;
  while(n!=0)
  {
      s+=pow(n%10,2);
      n=n/10;
  }
  cout<<s;
}
