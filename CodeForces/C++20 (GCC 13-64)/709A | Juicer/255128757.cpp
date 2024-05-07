#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int arr[n];
    int sum=0;
    int a=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=b)
        {
            sum+=arr[i];
        }
        if(sum>d)
        {
            a++;
            sum=0;
        }
    }
    cout<<a<<endl;
}