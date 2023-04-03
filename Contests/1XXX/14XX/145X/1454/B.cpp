#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;
        map<int, int> M, P;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            M[x]++; P[x] = i;
        }

        int ans = -2, val = 1e9;
        for (auto [p, e] : M) {
            if (e == 1 && p < val) {
                ans = P[p]; val = p;
            }
        }

        cout << ans + 1 << "\n";
    }
}
