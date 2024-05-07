#include <bits/stdc++.h>
#include<string.h>
using namespace std;
 
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a=0;
        char s[100];
        cin>>s;
        int l=strlen(s);
        for(int i=0;i<((l/2)-1);i++)
        {
            if(s[i]-s[i+1] != 0)
            {
                a++;
            }
        }
       if(a>0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}