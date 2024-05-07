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
        int a=1;
        for(int i=0;i<n;i++)
        {
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
}