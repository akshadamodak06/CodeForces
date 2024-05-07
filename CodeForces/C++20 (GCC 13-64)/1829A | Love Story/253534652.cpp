#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a=0;
        string s="codeforces";
        string s1;
        cin>>s1;
        for(int i=0;i<10;i++)
        {
            if(s1[i]!=s[i])
            {
                a++;
            }
        }
        cout<<a<<endl;
    }
}