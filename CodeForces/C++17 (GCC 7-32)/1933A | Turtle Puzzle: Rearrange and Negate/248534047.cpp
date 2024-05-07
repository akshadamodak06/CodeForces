#include <iostream>
using namespace std;
int main()
{
    int cases,n,num;
    int sum=0;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>num;
            if(num<0)
            {
                num=-1*num;
            }
            sum=sum+num;
        }
        cout<<sum<<endl;;
        sum=0;
    }
}