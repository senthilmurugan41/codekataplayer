#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
 string s;
 int n;
 cin>>n;
 cin>>s;
 for(int i=s.length()-1;i>=0;i--)
 {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        continue;
     else
        cout<<s[i];
 }
}
