#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, k, mx = 0; cin >> n >> k;
        vector<long long> V(n);
        for (long long &v : V) { cin >> v; mx = max(mx, v); }
        vector<long long> P(200000);
        for (int i = 0; i < n; i++) {
            long long pv = 1000000000000;
            for (long long q = 1; q <= min(V[i], k); q = V[i] / (V[i] / q) + 1) {
                long long nv = V[i] / q;
                P[nv + 1] = max(P[nv + 1], pv);
                pv = nv;
            }
            P[0] = max(P[0], pv);
        }
        long long ans = 1000000000000, c = 0;
        for (int i = 0; i <= V[0]; i++) {
            c = max(c, P[i]);
            ans = min(ans, c - i);
        }
        cout << ans << "\n";
    }
}
