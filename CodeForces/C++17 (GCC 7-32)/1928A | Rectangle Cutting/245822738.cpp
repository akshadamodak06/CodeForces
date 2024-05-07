#include <iostream>
using namespace std;
int main()
{
    int n;
    int a,b,rem1,rem2,q1,q2;
    cin>>n;
   
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        rem1=a%2;
        rem2=b%2;
        q1=a/2;
        q2=b/2;
       if(((rem1==0)&&(q1!=b))||((rem2==0)&&(q2!=a)))
       {
           cout<<"Yes"<<endl;
       }
       else 
       {
           cout<<"No"<<endl;
       }
       
 
    }
    return 0;
}