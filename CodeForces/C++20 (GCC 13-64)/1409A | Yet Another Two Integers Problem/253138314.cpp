#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
       int a,b;
       cin>>a>>b;
       int quo=abs(a-b)/10;
       int rem=abs(a-b)%10;
       if(rem==0)
       {
           cout<<quo<<endl;
       }
       else
       {
           cout<<quo+1<<endl;
       }
    }
}