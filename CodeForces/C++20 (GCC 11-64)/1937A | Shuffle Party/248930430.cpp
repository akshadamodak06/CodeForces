#include <iostream>
#include <math.h>
using namespace std;
#define int long long 
signed main()
{
   int cases,k;
   cin>>cases;
   for(int i=0;i<cases;i++)
   {
       cin>>k;
       cout<<static_cast<int>(pow(2,floor(log2(k))))<<endl;
   }
   return 0;
}