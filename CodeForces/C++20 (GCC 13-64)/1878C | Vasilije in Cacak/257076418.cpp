#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        int sum1=k*(k+1)/2;
        int sum2=k*(2*n+1-k)/2;
        if(x>=sum1 && x<=sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}