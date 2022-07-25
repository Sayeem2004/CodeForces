#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> V(n, vector<int>(m));
        for (vector<int> &r : V) for (int &c : r) cin >> c;
        if ((n+m) % 2 == 0) cout << "NO\n";
        else {
            vector<vector<array<int, 2>>> DP(n, vector<array<int, 2>>(m));
            for (int i = 0; i < n; i++) {
                for (int q = 0; q < m; q++) {
                    if (i == 0 && q == 0) DP[i][q] = {V[i][q], V[i][q]};
                    else if (i == 0) DP[i][q] = {V[i][q] + DP[i][q-1][0], V[i][q] + DP[i][q-1][0]};
                    else if (q == 0) DP[i][q] = {V[i][q] + DP[i-1][q][1], V[i][q] + DP[i-1][q][1]};
                    else DP[i][q] = {V[i][q] + min(DP[i][q-1][0], DP[i-1][q][0]), V[i][q] + max(DP[i][q-1][1], DP[i-1][q][1])};
                }
            }
            if (DP[n-1][m-1][0] <= 0 && DP[n-1][m-1][1] >= 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
