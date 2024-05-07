#include <iostream>
using namespace std;
 
int main()
{
   int n;
   int a=0,b=0;
   cin>>n;
   char str[n];
   cin>>str;
   for(int i=0;i<n;i++)
   {
       if(str[i]=='n')
       {
           a++;
       }
       if(str[i]=='r')
       {
           b++;
       }
   }
   for(int i=0;i<a;i++)
   {
       cout<<"1 ";
   }
   for(int i=0;i<b;i++)
   {
       cout<<"0 ";
   }
   return 0;
}