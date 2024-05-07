#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=n-k;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(int j=n-k-1;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}