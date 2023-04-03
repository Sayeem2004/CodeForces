#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> V(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                cin >> V[i][q];
            }
        }

        vector<vector<int>> LR(n, vector<int>(m)), RL(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                LR[i][q] = V[i][q];
                if (i > 0 && q > 0) LR[i][q] += LR[i-1][q-1];
            }
        }
        for (int i = n-1; i >= 0; i--) {
            for (int q = 0; q < m; q++) {
                RL[i][q] = V[i][q];
                if (i < n-1 && q > 0) RL[i][q] += RL[i+1][q-1];
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                int lrd = min(n-i-1, m-q-1), rld = min(i, m-q-1), sm = 0;
                sm += LR[i + lrd][q + lrd];
                sm += RL[i - rld][q + rld];
                sm -= V[i][q];
                ans = max(ans, sm);
            }
        }

        cout << ans << "\n";
    }
}
