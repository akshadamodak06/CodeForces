#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cases;
    cin >>cases;
    while(cases--)
    {
        int x,n;
        cin>>x>>n;
        int rem=n%4;
        if(x%2)
        {
            if(rem==0)
            {
                cout<<x<<endl;
            }
            else if(rem==1)
            {
                cout<<x+n<<endl;
            }
            else if (rem==2)
            {
                cout<<x-1<<endl;
            }
            else 
            {
                cout<<x-1-n<<endl;
            }
        }
        else
        {
            if(rem==0)
            {
                cout<<x<<endl;
            }
            else if(rem==1)
            {
                cout<<x-n<<endl;
            }
            else if (rem==2)
            {
                cout<<x+1<<endl;
            }
            else 
            {
                cout<<x+1+n<<endl;
            }
        }
    }
    
  
}