#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max(a+b,c+d)<<endl;
    }
}