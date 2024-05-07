#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=0;
        int d=1;
        sum+=a;
        sum+=b/3;
        int rem=b%3;
        if(rem)
        {
            if(c>=(3-rem))
            {
                sum+=1;
                c-=(3-rem);
            }
            else
            {
                cout<<"-1"<<endl;
                d=0;
            }
            
        }
        if(d)
        {
            sum+=(c/3);
            int rem1=c%3;
            if(rem1)
            {
                sum+=1;
            }
            cout<<sum<<endl;
 
        }
        
    }
}