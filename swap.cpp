#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      if(i%2==0)
      {
            for(int j=i+1;j<s.length();j++)
            {
                swap(s[i],s[j]);
                break;
            }
      }

  }
  cout<<s;
}
