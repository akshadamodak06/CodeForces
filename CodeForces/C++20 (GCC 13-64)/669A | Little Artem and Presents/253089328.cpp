#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem=n%3;
    if(rem==0||rem==2)
    {
        cout<<2*n/3<<endl;
    }
    else
    {
        cout<<(2*n/3)+1<<endl;
    }
}