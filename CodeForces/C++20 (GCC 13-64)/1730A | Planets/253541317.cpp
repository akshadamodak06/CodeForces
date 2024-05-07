#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n,c;
        cin>>n>>c;
        int arr[n];
        int counter=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            arr[n]=1000;
            if(arr[i]==arr[i+1])
            {
                counter++;
            }
            else
            {
                counter++;
                if(counter<c)
                {
                    sum+=counter;
                }
                else
                {
                    sum+=c;
                }
                counter=0;
            }
        }
        cout<<sum<<endl;
    }
}