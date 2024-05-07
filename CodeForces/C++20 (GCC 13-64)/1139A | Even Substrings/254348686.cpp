#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   cin>>n>>s;
   int a=0;
   for(int i=0;i<n;i++)
   {
       if((s[i]-'0')%2==0)
       {
           a+=(i+1);
       }
   }
 cout<<a;
 return 0;
}