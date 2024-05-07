#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int a=0;
    while(cases--)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]=='+')
            {
                a++;
            }
            else
            {
                a--;
            }
        }
        cout<<abs(a)<<endl;
        a=0;
    }
}