#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem=n%5;
    if(rem==0)
    {
        cout<<n/5;
    }
    else
    {
        cout<<(n/5)+1;
    }
    return 0;
}