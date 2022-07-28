#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<ll> V(n);
        ll sm = 0;
        for (int i = 0; i < n; i++) {
            cin >> V[i];
            sm += V[i];
        }
        if (sm % n != 0) {
            cout << -1 << "\n";
        } else {
            ll med = sm/n;
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (V[i] > med) ans++;
            }
            cout << ans << "\n";
        }
    }
}
