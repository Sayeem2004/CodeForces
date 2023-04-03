#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        vector<long long> V(n), M(n), P(n);

        for (int i = 0; i < n; i++) {
            cin >> V[i];
            M[i] = (i == 0 ? V[i] : max(M[i-1], V[i]));
            P[i] = (i == 0 ? V[i] : P[i-1] + V[i]);
        }

        for (int i = 0; i < m; i++) {
            long long x; cin >> x;
            int pos = upper_bound(M.begin(), M.end(), x) - M.begin() - 1;

            if (pos <= -1) cout << 0 << " ";
            else cout << P[pos] << " ";
        }

        cout << "\n";
    }
}
