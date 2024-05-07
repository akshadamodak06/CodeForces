#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int sum=0;
        int a=0;
        int n;
        cin>>n;
        //cout<<n;
        int arr[n];
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                
                sum+=arr[i];
            }
            int q=sum/n;
            
            for(int i=0;i<n;i++)
            {
                if(arr[i]<q)
                {
                    cout<<"NO"<<endl;
                    a=1;
                    break;
                }
                else
                {
                    arr[i+1]+=(arr[i]-q);
                    arr[i]=q;
                }
            }
            if(a==0)
            {
                cout<<"YES"<<endl;
            }
         
        sum=0;
        a=0;
    }
}