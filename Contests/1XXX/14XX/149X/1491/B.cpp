#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, u, v; cin >> n >> u >> v;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        long long ans = 1000000000000;
        for (int i = 1; i < n; i++) {
            if (abs(V[i]-V[i-1]) >= 2) ans = min(ans, 0LL);
            else ans = min(ans, (2-abs(V[i]-V[i-1]))*v);
            if (V[i] != V[i-1]) ans = min(ans, u);
            else ans = min(ans, u+v);
        }
        cout << ans << "\n";
    }
}
