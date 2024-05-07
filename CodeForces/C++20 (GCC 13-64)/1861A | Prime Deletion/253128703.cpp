#include <iostream>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int a=0;
        char str[9]={0};
        for(int i=0;i<9;i++)
        {
            
            cin>>str[i];
            if(str[i]=='1')
            {
                a=1;
            }
            else if(str[i]=='3')
            {
                a=3;
            }
           
        }
        if(a==1)
        {
            cout<<"31"<<endl;
        }
        if(a==3)
        {
            cout<<"13"<<endl;
        }
        a=0;
    } 
}
 
 