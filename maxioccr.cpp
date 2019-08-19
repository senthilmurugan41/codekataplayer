#include<iostream>
using namespace std;
int main()
{
   int c[256]={0};
   string s;
   getline(cin,s);
   int maximum=0;
   char leng;
   for(int i=0;i<s.length();i++)
   {
       c[s[i]]++;
       if(c[s[i]]>maximum)
       {
           maximum=c[s[i]];
           leng=s[i];
       }
   }
   cout<<leng;
}
