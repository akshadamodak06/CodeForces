#include <iostream>
#include <numeric>
using namespace std;
 
int main()
{
   int cases;
   cin>>cases;
   for(int i=0;i<cases;i++)
   {
       int k;
       cin>>k;
       cout<<100/ gcd(100,k)<<endl;
   }
   return 0;
}