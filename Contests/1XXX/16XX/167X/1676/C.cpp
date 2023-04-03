#include <bits/stdc++.h>
using namespace std;

int diff(string a, string b, int m) {
    int ans = 0;

    for (int i = 0; i < m; i++) {
        ans += abs(a[i] - b[i]);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<string> V(n);
        for (string &s : V) cin >> s;

        int ans = 1e9;
        for (int i = 0; i < n; i++) {
            for (int q = i+1; q < n; q++) {
                ans = min(ans, diff(V[i], V[q], m));
            }
        }

        cout << ans << "\n";
    }
}
