#include <iostream>
using namespace std;
int main()
{
    int cases,n,rem,remf,num;
    int sum=0;
    int count=0;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>num;
            sum=sum+num;
            rem=num%3;
            if(rem==1)
            {
                count++;
            }
        }
        remf=sum%3;
        if(remf==0)
        {
            cout<<"0"<<endl;
        }
        else if(remf==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if(count == 0)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        
        count=0;
        sum=0;
    }
}