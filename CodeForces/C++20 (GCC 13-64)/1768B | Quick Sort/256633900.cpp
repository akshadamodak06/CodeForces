#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int b=0;
        int a=1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==a)
            {
               b++;
               a++;
            }
        }
        int rem=(n-b)%k;
        if(rem==0)
        {
            cout<<(n-b)/k<<endl;
        }
        else
        {
            cout<<((n-b)/k)+1<<endl;
        }
        
    }
}