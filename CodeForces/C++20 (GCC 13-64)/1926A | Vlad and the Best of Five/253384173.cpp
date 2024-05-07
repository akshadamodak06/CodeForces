#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int a=0,b=0;
    while(cases--)
    {
       char str[5];
       for(int i=0;i<5;i++)
       {
           cin>>str[i];
           if(str[i]=='A')
           {
               a++;
           }
           else
           {
               b++;
           }
       }
       if(a>b)
       {
           cout<<"A"<<endl;
       }
       else
       {
           cout<<"B"<<endl;
       }
       a=0;
       b=0;
    }
}