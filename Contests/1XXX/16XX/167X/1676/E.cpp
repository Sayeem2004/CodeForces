#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;

        sort(V.rbegin(), V.rend());
        vector<long long> P(n+1);
        for (int i = 1; i <= n; i++) {
            P[i] = P[i-1] + V[i-1];
        }

        for (int i = 0; i < m; i++) {
            long long x; cin >> x;
            long long pos = lower_bound(P.begin(), P.end(), x) - P.begin();
            if (pos > n) cout << -1 << "\n";
            else cout << pos << "\n";
        }
    }
}
