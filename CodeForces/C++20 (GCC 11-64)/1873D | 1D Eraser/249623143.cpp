#include <bits/stdc++.h>
using namespace std;
int main()
{
   int cases;
   int n,k;
   int a=0;
   cin>>cases;
   while(cases--)
   {
       cin>>n>>k;
       string str;
       cin>>str;
       for(int j=0;j<n;j++)
       {
           if(str[j]=='B')
           {
               j+=k-1;
               a++;
           }
       }
       cout<<a<<endl;
       a=0;
   }
}