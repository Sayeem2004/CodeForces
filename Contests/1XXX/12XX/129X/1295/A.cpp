#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n % 2 == 1) {
            cout << '7';
            n -= 3;
        }
        for (int i = 0; i < n/2; i++) {
            cout << '1';
        }
        cout << "\n";
    }
}
