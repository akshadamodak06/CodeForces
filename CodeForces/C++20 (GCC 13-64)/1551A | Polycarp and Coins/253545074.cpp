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
        int q=n/3;
        int r=n%3;
        if(r==0)
        {
            cout<<q<<" "<<q<<endl;
        }
        else if (r==1)
        {
            cout<<q+1<<" "<<q<<endl;
        }
        else
        {
            cout<<q<<" "<<q+1<<endl;
        }
    }
}