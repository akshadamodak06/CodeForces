 #include<iostream>
using namespace std;
 
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
    int m,p;
    cin>>m>>p;
    int minArr[m], possArr[p];
    for(int i=0; i<m; i++)
    {
        cin>>minArr[i];
    }
    for(int i=0 ;i<p; i++)
    {
        cin>>possArr[i];
    }
    int min = minArr[0];
    for(int i=0; i<m; i++)
    {
        if(minArr[i]<min)
        min = minArr[i];
    }
    for(int i=0; i<p; i++)
    {
        if(possArr[i]<min)
        cout<<possArr[i]<<" ";
        else 
        cout<<min-1<<" ";
    }
    cout<<endl;
    }
}