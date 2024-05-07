#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int a=0,b=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='B')
           {
               a=i;
           }
           if(s[n-i-1]=='B')
           {
               b=n-i-1;
           }
       }
       cout<<a-b+1<<endl;
       
    }
}