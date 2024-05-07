#include <iostream>
using namespace std;
int main()
{
    int cases;
    int a=0,b=0,c=0;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        char arr[3][3];
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                cin>>arr[j][k];
                if(arr[j][k]=='A')
                {
                    a++;
                }
                else if(arr[j][k]=='B')
                {
                    b++;
                }
                else if(arr[j][k]=='C')
                {
                    c++;
                }
                else
                {
                    continue;
                }
            }
        }
        if(a==2)
        {
            cout<<"A"<<endl;
        }
        if(b==2)
        {
            cout<<"B"<<endl;
        }
        if(c==2)
        {
            cout<<"C"<<endl;
        }
        a=0;
        b=0;
        c=0;
    }
}