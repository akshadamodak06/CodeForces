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
        if(n%2)
        {
            cout<<"7";
            
        }
        else
        {
            cout<<"1";
        }
        for(int i=0;i<(n/2)-1;i++)
        {
            cout<<"1";
        }
        cout<<endl;
    }
}