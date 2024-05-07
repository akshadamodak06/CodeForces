#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=n;
    while(i>0)
    {
        for(int j=0;j<i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else
            {
                continue;
            }
        }
        
        i--;
        
    }
    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    
    
    return 0;
    
}