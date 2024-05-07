#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int max=0;
    while(cases--)
    {
        int n;
        int counter=0;
        int a;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<arr[i-1])
            {
                a=i-1;
                break;
            }
            else
            {
                counter++;
            }
        }
        if(counter==n)
        {
            cout<<"0"<<endl;
        }
        else
        {
            for(int i=0;i<=a;i++)
            {
                if(max<arr[i])
                {
                    max=arr[i];
                }
            }
            cout<<max<<endl;
        }
        counter=0;
        max=0;
    }
}