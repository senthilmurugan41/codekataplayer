#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
  string s[]={"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
  string w;
  cin>>w;
  for(int i=0;i<20;i++)
  {
      if(w==s[i])
      {
          cout<<i+1;
      }
  }
}
