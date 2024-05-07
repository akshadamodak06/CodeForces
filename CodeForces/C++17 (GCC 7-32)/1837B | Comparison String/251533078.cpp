#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int cases;
    cin>>cases;
    while(cases--)
    {
       
        int max1=1;
        int length=1;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            
            if(s[i]==s[i+1])
            {
                length++;
            }
            else
            {
                if(max1<length)
                {
                    max1=length;
                }
                length=1;
            }
        }
        cout<<max1+1<<endl;
    }
}