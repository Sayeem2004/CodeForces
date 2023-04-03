#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> CNT(m);
        vector<vector<int>> HIGH(m);

        for (int i = 0; i < n; i++) {
            for (int q = 0; q < m; q++) {
                char c; cin >> c;
                if (c == '*') CNT[q].push_back(i);
                else if (c == 'o') HIGH[q].push_back(i);
            }
        }

        vector<string> V(n, string(m, '.'));
        for (int i = 0; i < m; i++) {
            for (int q = 0; q < HIGH[i].size(); q++) V[HIGH[i][q]][i] = 'o';
            HIGH[i].push_back(n);
            sort(CNT[i].rbegin(), CNT[i].rend());

            for (int q = 0; q < CNT[i].size(); q++) {
                int pos = lower_bound(HIGH[i].begin(), HIGH[i].end(), CNT[i][q]) - HIGH[i].begin();
                V[--HIGH[i][pos]][i] = '*';
            }
        }

        for (string s : V) cout << s << "\n";
    }
}
