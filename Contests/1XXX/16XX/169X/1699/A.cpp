#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n == 1) cout << -1 << "\n";
        else {
            if (n % 2 == 0) cout << n/2 << " " << 0 << " " << 0 << "\n";
            else cout << -1 << "\n";
        }
    }
}
