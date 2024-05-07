#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a=0;
        int result=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                a++;
            }
            else
            {
                result=max(result,a);
                a=0;
            }
 
        }
        cout<<max(result,a)<<endl;
    }
}