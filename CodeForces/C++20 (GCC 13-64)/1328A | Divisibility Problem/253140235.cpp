#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a,b;
        cin>>a>>b;
        int quo=a/b;
        int rem=a%b;
        if(rem==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
        cout<<(quo+1)*b-a<<endl;
        }
    }
}