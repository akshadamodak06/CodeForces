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
        int arr[n][2];
        int a=0;
        int b=1000000000;
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(arr[i][0]==1)
                {
                    if(arr[i][1]>a)
                    {
                        a=arr[i][1]; 
                    }
                }
                else if(arr[i][0]==2)
                {
                    if(arr[i][1]<b)
                    {
                        b=arr[i][1];
                    }
                }
                
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(arr[i][0]==3)
                {
                    if(arr[i][1]<=b && arr[i][1]>=a )
                    {
                        c++;
                    }
                }
            }
        }
        
        if(b<a)
        {
            cout<<"0"<<endl;
        }
        else 
        {
            cout<<b-a+1-(c/2)<<endl;
        }
       
    }
}