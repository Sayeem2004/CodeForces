#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, x; cin >> n >> x;
        vector<int> V(n);
        for (int &v : V) cin >> v;
        int ans = 0, mn = V[0], mx = V[0];
        for (int i = 0; i < n; i++) {
            mn = min(mn, V[i]);
            mx = max(mx, V[i]);
            if (mx-mn > 2*x) {
                ans++;
                mx = V[i];
                mn = V[i];
            }
        }
        cout << ans << "\n";
    }
}
