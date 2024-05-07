#include <iostream>
using namespace std;
 
int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0 || (n % 2 == 1 && k % 2 == 1 && k <= n)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}