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
        int k=2*n;
        int arr[k];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        int score=0;
        sort(arr,arr+k);
        for(int i=0;i<n;i++)
        {
            score+=arr[(2*i)];
        }
        if(k%2)
        {
            score+=arr[k-1];
        }
       cout<<score<<endl;
    }
}