#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
       int n,k,x;
       cin>>n>>k>>x;
       if(x==1)
       {
           if(k==1)
           {
               cout<<"NO"<<endl;
           }
           else
           {
           if(n%2)
           {
               if(k==2)
               {
                   cout<<"NO"<<endl;
               }
               else
               {
               cout<<"YES"<<endl;
               int quotient=(n-3)/2;
               cout<<quotient+1<<endl;
               cout<<"3 ";
               for(int i=0;i<quotient;i++)
               {
                   cout<<"2 ";
               }
               cout<<endl;
               }
           }
           else
           {
               
               cout<<"YES"<<endl;
               int quotient=n/2;
               cout<<quotient<<endl;
               for(int i=0;i<quotient;i++)
               {
                   cout<<"2 ";
               }
               cout<<endl;
           }
           }
       }
       else 
       {
           cout<<"YES"<<endl;
           cout<<n<<endl;
           for(int i=0;i<n;i++)
           {
               cout<<"1 ";
           }
           cout<<endl;
       }
    }
}