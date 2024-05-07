#include<bits/stdc++.h>
using namespace std;
int main()
{
   
        int n;
        cin>>n;
        int arr[n];
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sum+=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                sum+=arr[i];
            }
            else
            {
                if(arr[i+1] != 1)
                {
                    sum+=arr[i+1]-1;
                    arr[i]=arr[i+1]-1;
                }
                else
                {
                    break;
                }
                
            }
        }
        cout<<sum<<endl;
    
}