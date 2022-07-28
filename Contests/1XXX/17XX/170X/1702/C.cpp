#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n, k; cin >> n >> k;
        map<int, vector<int>> M;
        for (int i = 0; i < n; i++) {
            int u; cin >> u;
            M[u].push_back(i);
        }
        for (int i = 0; i < k; i++) {
            int a, b; cin >> a >> b;
            if (M[a].size() == 0 || M[b].size() == 0) cout << "NO\n";
            else if (M[a][0] > M[b][M[b].size()-1]) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}
