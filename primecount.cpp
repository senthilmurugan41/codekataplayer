#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  int l,r,flag=0,c=0;
  cin>>l>>r;
  for(int i=l;i<=r;i++)
  {
      for(int j=2;j<i;j++)
      {
          if(i%j==0)
            flag=1;
      }
     if(flag==0)
        c++;
     else
        flag=0;
  }
  cout<<c;
}
