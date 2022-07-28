#include <bits/stdc++.h>
using namespace std;

int dfs(int v, vector<vector<int>> &A, vector<bool> &V) {
    int cnt = 1;
    V[v] = true;
    for (int u : A[v]) {
        if (!V[u]) cnt += dfs(u, A, V);
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while (t--) {
        int n; cin >> n;
        vector<vector<int>> A(n);
        bool br = false;
        map<int, int> M;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b; a--; b--;
            A[a].push_back(b);
            A[b].push_back(a);
            M[a]++; M[b]++;
            if (a == b) br = true;
        }
        for (pair<int, int> m : M) {
            if (m.second != 2) {
                br = true; break;
            }
        }
        if (br) cout << "NO\n";
        else {
            vector<bool> V(n);
            bool ans = true;
            for (int i = 0; i < n; i++) {
                if (!V[i]) ans &= (dfs(i, A, V) % 2 == 0);
            }
            cout << (ans ? "YES\n" : "NO\n");
        }
    }
}
