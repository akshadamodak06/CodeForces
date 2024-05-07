#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
       int num;
       cin>>num;
       int arr[num];
       int p=0,n=0;
       for(int i=0;i<num;i++)
       {
           cin>>arr[i];
           if(arr[i]>0)
           {
               p++;
           }
           else
           {
               n++;
           }
       } 
       if(p>n)
       {
           if(!(n%2))
           {
               cout<<"0"<<endl;
           }
           else
           {
               cout<<"1"<<endl;
           }
       }
       else
       {
           int diff=(n-p)/2;
           if((n-p)%2)
           {
               diff++;
           }
           n-=diff;
           if(n%2)
           {
               cout<<diff+1<<endl;
           }
           else
           {
               cout<<diff<<endl;
           }
           
       }
    }
}