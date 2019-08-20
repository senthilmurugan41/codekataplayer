#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
   string a;
   int x=0;
   int flag=0;
   int l=a.length()-1;
   getline(cin,a);
   while(l>x)
   {
       if(a[x++]!=a[l--])
       {
           flag=1;
       }
   }
   if(flag==1)
    cout<<"NO";
   else
    cout<<"YES";

}
