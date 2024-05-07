#include <iostream>
using namespace std;
int main()
{
    int num,min;
    cin>>num;
    int arr[num];
    cin>>arr[0];
    if(arr[0]<0)
    {
        arr[0]=-1*arr[0];
    }
    min=arr[0];
    
    for(int i=1;i<num;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            arr[i]=-1*arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
        
        
    }
    cout<<min;
    return 0;
}