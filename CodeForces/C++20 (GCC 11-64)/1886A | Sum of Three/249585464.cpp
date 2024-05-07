#include <iostream>
using namespace std;
int main()
{
   int cases;
   int a=0;
   int n,l;
   cin>>cases;
   for(int i=0;i<cases;i++)
   {
       cin>>n;
       for(int j=1;j<=2;j++)
       {
           for(int k=2;k<=7;k++)
           {
               if((k==3)||(k==6))
               {
                   k++;
               }
               l=n-j-k;
               if((j!= k) &&(k!=l)&&(j!=l) &&(l%3 != 0) && (l>0))
               {
                    cout<<"YES"<<endl;
                    cout<<j<<" "<<k<<" "<<l<<" "<<endl;
                    a=1;
                    break;
               }
               
           }
           if(a==1)
               {
                   break;
               }
       }
       if(a==0)
       {
           cout<<"NO"<<endl;
       }
       a=0;
   }
}