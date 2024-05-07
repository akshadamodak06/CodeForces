#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,x;
        cin>>n>>x;
        int p=0,ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ans=max(ans,a-p);
            p=a;
        }
        ans=max(ans,2*(x-p));
        cout<<ans<<endl;
    }
}
  
  
  