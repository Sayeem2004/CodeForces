#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        map<int, int> M;

        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            M[x] = i;
        }

        int ans = -1;
        for (auto [k1, v1] : M) {
            for (auto [k2, v2] : M) {
                if (__gcd(k1, k2) == 1) {
                    ans = max(ans, v1 + v2);
                }
            }
        }

        cout << ans << "\n";
    }
}
