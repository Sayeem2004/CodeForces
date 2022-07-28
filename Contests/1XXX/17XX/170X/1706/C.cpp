#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        if (n % 2 == 1) {
            long long ans = 0;
            for (int i = 1; i < n-1; i++)
                if (i % 2 == 1) ans += max(max(V[i+1], V[i-1])+1-V[i], 0LL);
            cout << ans << "\n";
        } else {
            vector<long long> DP(n, 0);
            for (int i = 1; i < n-1; i++) {
                if (i % 2 == 1) {
                    if (i == 1) DP[i] = max(max(V[i+1], V[i-1])+1-V[i], 0LL);
                    else DP[i] = DP[i-2] + max(max(V[i+1], V[i-1])+1-V[i], 0LL);
                } else {
                    if (i == 2) DP[i] = max(max(V[i+1], V[i-1])+1-V[i], 0LL);
                    else DP[i] = DP[i-2] + max(max(V[i+1], V[i-1])+1-V[i], 0LL);
                }
            }
            long long ans = min(DP[n-2], DP[n-3]);
            for (int i = 1; i < n-2; i += 2) {
                ans = min(ans, DP[i] + DP[n-2] - DP[i+1]);
            }
            cout << ans << "\n";
        }
    }
}
