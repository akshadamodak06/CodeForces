#include <iostream>
using namespace std;
 
int main()
{
    int cases,a,b,c,result;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>a>>b>>c;
        result=a^b^c;
        cout<<result<<endl;
        
    }
}