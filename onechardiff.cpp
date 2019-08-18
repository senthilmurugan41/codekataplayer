#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  string s;
  string s1;
  int c=0;
  cin>>s>>s1;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]!=s1[i])
        c++;
  }
  if(c==1)
    cout<<"yes";
  else
    cout<<"no";
}
