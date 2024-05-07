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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=2;
        }
        int num;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            arr[num-1]--;
        }
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                a++;
            }
        }
        cout<<a<<endl;
    }
}