#include <bits/stdc++.h>
using namespace std;

int rot_sum(vector<string> &G, int i, int q, int n) {
    int sm = 0;
    sm += G[i][q]-'0';
    sm += G[q][n-i-1]-'0';
    sm += G[n-i-1][n-q-1]-'0';
    sm += G[n-q-1][i]-'0';
    return sm;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<string> G(n);
        for (int i = 0; i < n; i++)
            cin >> G[i];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < n; q++) {
                int sm = rot_sum(G, i, q, n);
                // cout << sm << " ";
                ans += min(sm, 4-sm);
            }
            // cout << "\n";
        }
        cout << ans/4 << "\n";
    }
}

// 0 x 0 0 0
// 0 0 0 0 x
// 0 0 0 0 0
// x 0 0 0 0
// 0 0 0 x 0
