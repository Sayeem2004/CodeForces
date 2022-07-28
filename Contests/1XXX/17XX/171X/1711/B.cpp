#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n, m; cin >> n >> m;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        vector<vector<long long>> A(n);
        for (int i = 0; i < m; i++) {
            long long a, b; cin >> a >> b; a--; b--;
            A[a].push_back(b);
            A[b].push_back(a);
        }
        if (m % 2 == 0) cout << 0 << "\n";
        else {
            long long ans = 1000000000000;
            vector<long long> T;
            for (int i = 0; i < n; i++) {
                if (A[i].size() % 2 == 1) ans = min(ans, V[i]);
                else {
                    for (int q = 0; q < A[i].size(); q++) {
                        if (A[A[i][q]].size() % 2 == 0) ans = min(ans, V[i]+V[A[i][q]]);
                    }
                }
            }
            vector<bool> D(n);
            long long sm = 0;
            for (int i = 0; i < n; i++) {
                for (int q = 0; q < A[i].size(); q++) {
                    if (!D[A[i][q]]) {
                        sm += V[A[i][q]];
                        D[A[i][q]] = true;
                    }
                }
            }
            ans = min(ans, sm);
            cout << ans << "\n";
        }
    }
}
