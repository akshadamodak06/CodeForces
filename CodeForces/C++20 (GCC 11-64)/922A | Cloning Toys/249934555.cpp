#include <iostream>
using namespace std;
int main()
{
    int x ,y;
    cin>>x>>y;
    int rem1=x%2;
    int rem2=y%2;
    if(rem1==rem2)
    {
        cout<<"No"<<endl;
    }
    else
    {
        if(rem1==0)
        {
            if((y<=x+1)&&(y>=2))
            {
                cout<<"Yes"<<endl;
            }
            else if(x==0 && y==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            if(rem1==1)
            {
                if((y>=3)&&(y<=x+1))
                {
                    cout<<"Yes"<<endl;
                }
                else if(y==2)
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
        }
        
    }
}