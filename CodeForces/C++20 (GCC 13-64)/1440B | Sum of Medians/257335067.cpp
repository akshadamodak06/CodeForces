#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        int sum=0;
        cin>>n>>k;
        int z=n*k;
        int arr[z];
        for(int i=0;i<z;i++)
        {
            cin>>arr[i];
        }
        int q;
        if(n%2)
        {
            q=(n/2)+1;
        }
        else
        {
            q=n/2;
        }
        int s=(q-1)*k;
        int c=(z-s)/k;
        for(int i=s;i<z;)
        {
            sum+=arr[i];
            i+=c;
        }
        cout<<sum<<endl;
    }
}