#include<iostream>
using namespace std;
int main()
{
    int n,n1,f=1;
    cin>>n>>n1;
    int * a=new int[n];
    int * b=new int[n1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n1;j++)
        cin>>b[j];
    for(int i=0;i<n;i++)
    {
        f=1;
        for(int j=0;j<n1;j++)
        {
            if(a[i]==b[j])
            {
               f=0;
               break;
            }
        }
    }
    if(f!=0)
        cout<<"NO";
    else
        cout<<"YES";
}
