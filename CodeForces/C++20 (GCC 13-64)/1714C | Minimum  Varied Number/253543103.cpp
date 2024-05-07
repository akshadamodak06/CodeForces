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
        int b;
        int a=9;
        int arr[9];
        for(int i=0;i<9;i++)
        {
            if(a<n)
            {
                n-=a;
                arr[i]=a;
            }
            else
            {
                arr[i]=n;
                b=i;
                break;
            }
            a--;
        }
        for(int i=b;i>=0;i--)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
}