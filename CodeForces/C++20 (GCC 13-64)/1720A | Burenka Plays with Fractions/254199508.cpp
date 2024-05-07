#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        long long n1,n2,d1,d2;
        cin>>n1>>d1>>n2>>d2;
        long long k1,k2;
        k1=n1*d2;
        k2=n2*d1;
        if(k1!=k2 && (k2 != 0 && k1 % k2 == 0 || k1 != 0 && k2 % k1 == 0 ))
        {
            cout<<"1"<<endl;
        }
        else if(k1==k2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        
    }
}