#include <bits/stdc++.h>
using namespace std;
 
bool ok(const string& s) {
    for (size_t i = 1; i < s.length(); ++i)
        if (s[i] == s[i - 1])
            return false;
    return true;
}
 
void solve() {
    string s, t;
    int l1, l2;
    cin >> l1 >> l2;
    cin >> s >> t;
 
    if (ok(s)) {
        cout << "Yes" << endl;
        return;
    }
 
    if (!ok(t) || t.front() != t.back()) {
        cout << "No" << endl;
        return;
    }
 
    bool zz = false, oo = false;
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            if (s[i] == '0') zz = true;
            if (s[i] == '1') oo = true;
        }
    }
 
    if (zz && t[0] == '0') {
        cout << "No" << endl;
        return;
    }
    if (oo && t[0] == '1') {
        cout << "No" << endl;
        return;
    }
 
    cout << "Yes" << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}