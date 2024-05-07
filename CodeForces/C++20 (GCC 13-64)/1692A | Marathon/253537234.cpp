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
        int arr[3];
        int a=0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]>n)
            {
                a++;
            }
        }
        cout<<a<<endl;
    }
}