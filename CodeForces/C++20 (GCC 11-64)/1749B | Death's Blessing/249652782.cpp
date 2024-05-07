#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cases;
    cin>>cases;
    int sum=0;
    int max=0;
    int sum1=0;
    while(cases--)
    {
        int n;
        int num;
        cin>>n;
        int k=n;
        while(k--)
        {
            cin>>num;
            sum+=num;
        }
        k=n;
       while(k--)
       {
            cin>>num;
            sum1+=num;
            if(num>max)
            {
                max=num;
            }
            else
            {
                max=max;
            }
        }
        cout<<sum+sum1-max<<endl;
        max=0;
        sum=0;
        sum1=0;
        
    }
}