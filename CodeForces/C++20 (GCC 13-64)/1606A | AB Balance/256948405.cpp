#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >>cases;
    while(cases--)
    {
        string s;
        cin>>s;
        int len=s.size();
        if(s[0]==s[len-1])
        {
            cout<<s<<endl;
        }
        else
        {
            s[len-1]=s[0];
            cout<<s<<endl;
        }
        
    }
    
  
}