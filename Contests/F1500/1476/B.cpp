#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        ll sm; cin >> sm;
        ll ans = 0;
        for (int i = 0; i < n-1; i++) {
            ll a; cin >> a;
            ans = max(ans, (a * 100ll - sm * k + k - 1) / k);
            sm += a;
        }
        cout << ans << "\n";
    }
}
