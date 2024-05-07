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
        int a=0;
        int b=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                a++;
            }
            else if(arr[i]==0)
            {
                b++;
            }
        }
        int rem=a%2;
        if(b!=0 || rem==1)
        {
            cout<<"0"<<endl;
        }
        else if(rem==0 && b==0)
        {
            cout<<"1"<<endl;
            cout<<"1 0"<<endl;
        }
        
    }
}