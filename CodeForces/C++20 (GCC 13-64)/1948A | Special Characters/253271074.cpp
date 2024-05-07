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
       if(n%2)
       {
           cout<<"NO"<<endl;
       }
       else 
       {
           if(n%4==0)
           {
               cout<<"YES"<<endl;
               for(int i=0;i<n/4;i++)
               {
                  
                   cout<<"AABB";
               }
               cout<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
               if(n==2)
               {
                 
                   cout<<"AA";
               }
               else
               {
                   for(int i=0;i<n/4;i++)
                   {   
                        
                        cout<<"AABB";
                   }
                   cout<<"AA";
               }
               cout<<endl;
           }
       }
    }
}