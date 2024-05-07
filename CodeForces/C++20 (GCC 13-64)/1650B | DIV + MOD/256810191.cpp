#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int ans = r / x + r % x;
        int m = r / x * x - 1;
        if(m >= l)
        {
            ans = max(ans, m / x + m % x);
        }
        cout << ans<<endl;
    }
}