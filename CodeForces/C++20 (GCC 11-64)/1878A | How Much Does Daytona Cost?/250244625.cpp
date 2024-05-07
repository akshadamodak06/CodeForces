#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int a=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(k==arr[i])
            {
                a++;
            }
        }
        if(a==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        a=0;
    }
}