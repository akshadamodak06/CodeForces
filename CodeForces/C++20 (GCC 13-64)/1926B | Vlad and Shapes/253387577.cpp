#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
       int n;
       cin>>n;
       int a=0;
       int k=0;
       char str[n][n];
       int arr1[n];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               cin>>str[i][j];
               if(str[i][j]=='1')
               {
                   a++;
               }
           }
           if(a!=0)
           {
                 arr1[k]=a;
                 k++;
           }
           a=0;
       }
       if(arr1[1]==arr1[0])
       {
           cout<<"SQUARE"<<endl;
       }
       else
       {
           cout<<"TRIANGLE"<<endl;
       }
       k=0;
    }
    
}