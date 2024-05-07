#include <iostream>
#include<cmath>
#include <vector>
using namespace std;
 
int main()
{
    int n,q,place,t;
    int k=1000;
    place=1;
    t=0;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        t=0;
       
        for(int j=0;j<4;j++)
        {
            
            q=arr[i]/k;
            arr[i]=arr[i]%k;
            if(q==0)
            {
                q=10;
            }
            if(q>=place)
            {
               t=t+q-place+1; 
            }
            else
            {
               t=t-q+place+1;  
            }
            place=q;
            k=k/10;
            
        }
        k=1000;
        place=1;
       arr1[i]=t; 
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<endl;
    }
    
    return 0;
}