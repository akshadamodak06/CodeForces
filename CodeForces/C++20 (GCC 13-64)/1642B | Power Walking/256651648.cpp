#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        for(int i=1;i<=n;i++)
        {
            if(s.size()>=i)
            {
                cout<<s.size()<<" ";
            }
            else
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}