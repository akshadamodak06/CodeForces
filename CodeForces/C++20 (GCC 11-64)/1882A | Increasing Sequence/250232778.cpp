#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
        int arr1[n];
        for(int i=0;i<n;i++)
        {
            arr1[i]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr1[i]==arr[i])
            {
                for(int j=i;j<n;j++)
                {
                    arr1[j]+=1;
                }
                
            }
        }
        cout<<arr1[n-1]<<endl;
        
    }
}