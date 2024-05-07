#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(f>arr[n-1]*a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int sub=0;
            int t=f;
            
            for(int i=0;i<=n-1;i++)
            {
                if(i==0)
                {
                    sub=arr[0];
                }
                else
                {
                    sub=arr[i]-arr[i-1];
                }
                
                if(sub*a>=b)
                {
                    t=t-b;
                }
                else
                {
                    t=t-sub*a;
                }
            }
           // cout<<t<<endl;
            if(t>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}