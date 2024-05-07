#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int acoins,bcoins;
    for(int i=0;i<cases;i++)
    {
        cin>>acoins>>bcoins;
        if((acoins+bcoins)%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}