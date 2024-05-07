#include <iostream>
using namespace std;
 
int main()
{
   int cases;
   int x,k;
   cin>>cases;
   for(int i=0;i<cases;i++)
   {
       cin>>x>>k;
       if((x%k==0))
       {
            cout<<"2"<<endl;
           cout<<x-1<<" 1"<<endl;
       }
       else 
       {
          cout<<"1"<<endl;
          cout<<x<<endl;
           
       }
 
   }
}