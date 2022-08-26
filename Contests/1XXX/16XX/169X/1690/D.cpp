#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int> P(n+1);
        for (int i = 0; i < n; i++) {
            P[i+1] = P[i]+(s[i] == 'B');
        }
        int ans = k;
        for (int i = k; i <= n; i++) {
            ans = min(ans, k - (P[i] - P[i-k]));
        }
        cout << ans << "\n";
    }
}
