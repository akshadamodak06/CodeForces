#include <iostream>
using namespace std;
int main()
{
    long long int cases,num,result;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>num;
        result= (num*num)+(2*num)+2;
        cout<<result<<endl;
    }
    return 0;
}