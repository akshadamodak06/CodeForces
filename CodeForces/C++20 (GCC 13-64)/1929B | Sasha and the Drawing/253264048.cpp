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
        int max=(2*n)-2;
        if((2*max)>=k)
        {
            if(k%2)
            {
                cout<<(k/2)+1<<endl;
            }
            else
            {
                cout<<k/2<<endl;
            }
        }
        else
        {
            cout<<k-max<<endl;
        }
    }
}