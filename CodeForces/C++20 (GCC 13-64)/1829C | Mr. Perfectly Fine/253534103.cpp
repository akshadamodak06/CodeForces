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
        int a=600000;
        int b=600000,c=600000,d=600000;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            cin>>s;
            if(s=="00")
            {
                if(arr[i]<a)
                {
                    a=arr[i];
                }
            }
            else if (s=="01")
            {
                if(arr[i]<b)
                {
                    b=arr[i];
                }
            }
            else if (s=="10")
            {
                if(arr[i]<c)
                {
                    c=arr[i];
                }
            }
            else if (s=="11")
            {
                if(arr[i]<d)
                {
                    d=arr[i];
                }
            }
        }
        int q=b+c;
       
        if(b==600000&&c==600000&&d==600000||b==600000 && d==600000 || c==600000 && d==600000)
        {
            cout<<"-1"<<endl;
        }
        
        else if(q<=d)
        {
            cout<<q<<endl;
        }
        else if(d<q)
        {
            cout<<d<<endl;
        }
     
    }
}