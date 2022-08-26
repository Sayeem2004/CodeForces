#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        if (n == 1) cout << 2 << "\n";
        else {
            int ans = n / 3;
            n -= n / 3 * 3;
            if (n == 0) cout << ans << "\n";
            else cout << ans+1 << "\n";
        }
    }
}
