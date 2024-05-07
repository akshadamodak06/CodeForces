#include <iostream>
using namespace std;
 
int main()
{
   char str[100];
   int check=0;
   int i=0;
   cin>>str;
    while(str[i] != '\0')
   {
       if(i>0)
       {
           if(str[i]==str[i-1])
           {
               check++;
           }
           else
           {
               check=0;
           }
           if(check==6)
           {
               cout<<"YES"<<endl;
               break;
           }
       }
       i++;
   }
   if(check != 6)
   {
       cout<<"NO"<<endl;
   }
}