#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        long long n; cin >> n;
        vector<long long> V(n);
        for (long long &v : V) cin >> v;
        vector<long long> DP(n+1, 1);
        for (long long i = 2; i <= n; i++) {
            for (long long q = 1; q <= ceil(sqrt(i)); q++) {
                if (i % q == 0) {
                    DP[i] = max(DP[i], (V[i - 1] > V[q - 1] ? DP[q] + 1 : 0LL));
                    DP[i] = max(DP[i], (V[i - 1] > V[(i / q) - 1] ? DP[i / q] + 1 : 0LL));
                }
            }
        }
        long long ans = 0;
        for (long long i = 1; i <= n; i++)
            ans = max(ans, DP[i]);
        cout << ans << "\n";
    }
}
