#include <iostream>
 
#include <string>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    int n;
    int a=0;
    while(cases--)
    {
        cin>>n;
        string s;
       
        int i=0;
        cin>>s;
        int l=s.length();
        while(i<=l/2)
        {
            
            int x=s[i]-s[l-1-i];
          
            if(x<0)
            {
                cout<<s<<endl;
                a=1;
                break;
            }
            else if(x>0)
            {
                for(int j=0;j<l;j++)
                {
                    cout<<s[l-j-1];
                }
                cout<<s<<endl;
                a=1;
                break;
            }
            else
            {
                i++;
            }
        }
        if(a==0)
        {
            cout<<s<<endl;
        }
    
       a=0;
    }
}