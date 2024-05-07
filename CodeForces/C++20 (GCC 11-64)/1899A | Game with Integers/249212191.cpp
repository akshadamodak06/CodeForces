#include <iostream>
using namespace std;
 
int main()
{
    int cases;
    int n;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>n;
        if((n%3)==0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
    return 0;
}