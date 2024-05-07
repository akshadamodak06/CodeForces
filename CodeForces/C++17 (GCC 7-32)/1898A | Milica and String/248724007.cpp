#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int b,n;
    int b1=0;
    for(int i=0;i<cases;i++)
    {
        cin>>n;
        cin>>b;
        char str[n];
        for(int j=0;j<n;j++)
        {
            cin>>str[j];
            if(str[j]=='B')
            {
                b1++;
            }
        }
        int j=0;
        if(b1<b)
        {
             while(b1 != b)
            {
                if(str[j]=='A')
                {
                   b1++;
                }
                j++;
            }
            
            cout<<"1"<<endl;
            cout<<j<<" B"<<endl;
        }
        else if(b1>b)
        {
            while(b1 != b)
            {
                if(str[j]=='B')
                {
                   b1--;
                }
                j++;
            }
            
            cout<<"1"<<endl;
            cout<<j<<" A"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
       b1=0; 
    }
}