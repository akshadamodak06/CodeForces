/******************************************************************************
 
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
#include <iostream>
using namespace std;
#define int long long
 
signed main()
{
    int cases;
    cin>>cases;
    int num1,num2,n;
    long long sum1=0,sum2=0;
    for(int i=0;i<cases;i++)
    {
        cin>>num1>>num2;
        for(int j=0;j<num1;j++)
        {
            cin>>n;
            sum1=sum1+n;
        }
        for(int j=0;j<num2;j++)
        {
            cin>>n;
            sum2=sum2+n;
        }
        if(sum1>sum2)
        {
            cout<<"Tsondu"<<endl;
        }
        else if(sum2>sum1)
        {
            cout<<"Tenzing"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
        sum1=0;
        sum2=0;
    }
    
}