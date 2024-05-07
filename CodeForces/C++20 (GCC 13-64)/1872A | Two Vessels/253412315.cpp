#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int diff=abs(a-b);
        int ans=diff/(2*c);
        if(diff%(2*c))
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }
}
  
  
  