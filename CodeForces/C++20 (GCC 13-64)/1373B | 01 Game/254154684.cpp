#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        string s;
        cin>>s;
        int a=0,b=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        a=min(a,b);
        if(a%2)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NET"<<endl;
        }
    }
}