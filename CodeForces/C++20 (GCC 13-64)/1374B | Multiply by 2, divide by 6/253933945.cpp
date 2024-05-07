#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int tw=0,th=0;
        while(n%2==0)
        {
            n=n/2;
            tw++;
        }
        while(n%3==0)
        {
            n=n/3;
            th++;
        }
        if(n==1 && tw<=th)
        {
            cout<<(2*th)-tw<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}