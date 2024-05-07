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
        
        
            for(int i=0;i<n;i++)
            {
                
                if(!(i%2))
                {
                for(int k=0;k<2;k++)
                {
                for(int j=0;j<n;j++)
                {
                    if(j%2)
                    {
                        cout<<"..";
                    }
                    else
                    {
                        cout<<"##";
                    }
                }
                cout<<endl;
                }
                }
                else
                {
                    for(int k=0;k<2;k++)
                    {
                    for(int j=0;j<n;j++)
                    {
                    if(j%2)
                    {
                        cout<<"##";
                    }
                    else
                    {
                        cout<<"..";
                    }
                    }
                    cout<<endl;
                    }
                }
                
            }
        
        
        
    }
}