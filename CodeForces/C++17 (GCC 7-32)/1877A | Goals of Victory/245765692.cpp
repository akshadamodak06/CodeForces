#include <iostream>
using namespace std;
 
int main()
{
    int cases;
    int teams,score,sum;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>teams;
        for(int j=0;j<teams-1;j++)
        {
            cin>>score;
            sum=sum+score;
        }
        cout<<(-1*sum)<<endl;
        sum=0;
        teams=0;
    }
    
    return 0;
}