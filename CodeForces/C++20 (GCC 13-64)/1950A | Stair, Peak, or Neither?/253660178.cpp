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
        if(a<b&&b<c)
        {
            cout<<"STAIR"<<endl;
        }
        else if (a<b && b>c)
        {
            cout<<"PEAK"<<endl;
        }
        else
        {
            cout<<"NONE"<<endl;
        }
 
    }
}