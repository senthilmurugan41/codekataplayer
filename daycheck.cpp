#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  string s[]={"Saturday","Sunday"};
  string s1;
  cin>>s1;
  int flag=0;
  for(int i=0;i<2;i++)
  {
      if(s1==s[i])
        flag=1;
  }
  if(flag==1)
    cout<<"yes";
  else
    cout<<"no";
}
