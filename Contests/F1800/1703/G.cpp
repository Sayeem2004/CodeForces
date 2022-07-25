#include <bits/stdc++.h>
using namespace std;
long long MX = 40;
long long INF = 1000000000000;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t; cin >> t; while (t--) {
        long long n, k; cin >> n >> k;
        vector<long long> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        vector<vector<long long>> DP(MX+1, vector<long long>(n+1, -INF));
        DP[0][0] = 0;
        for (int i = 0; i < n; i++) {
            for (int q = 0; q <= MX; q++) {
                if (DP[q][i] != -INF) {
                    DP[q][i+1] = max(DP[q][i+1], DP[q][i] + (V[i] >> q) - k);
                    int nxt = min(MX, (long long)q+1);
                    DP[nxt][i+1] = max(DP[nxt][i+1], DP[q][i] + (V[i] >> nxt));
                }
            }
        }
        long long ans = 0;
        for (int i = 0; i <= MX; i++)
            ans = max(ans, DP[i][n]);
        cout << ans << "\n";
    }
}
