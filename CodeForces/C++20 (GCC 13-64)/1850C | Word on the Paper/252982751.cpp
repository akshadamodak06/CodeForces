#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        char arr[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j] != '.')
                {
                    cout<<arr[i][j];
                }
            }
        }
        cout<<endl;
    }
}