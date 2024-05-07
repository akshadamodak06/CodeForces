#include <iostream>
using namespace std;
 
int main()
{
    int n,k,num;
    char ch;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>n>>k;
        for(int j=0;j<n;j++)
        {
            for(int z=0;z<k;z++)
            {
                ch='a'+z;
                cout<<ch;
            }
          
        }
        cout<<endl;
    }
    return 0;
}