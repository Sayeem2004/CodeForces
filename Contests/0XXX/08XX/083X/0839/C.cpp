#include <bits/stdc++.h>
using namespace std;

double dfs(int v, int p, vector<vector<int>> &A, vector<bool> &V) {
    V[v] = true;
    double ans = 0;

    for (int u : A[v]) {
        if (u == p || V[u]) continue;
        ans += (1 + dfs(u, v, A, V)) / (A[v].size() - (p != -1));
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout << fixed << setprecision(6);
    int n; cin >> n;
    vector<vector<int>> A(n);

    for (int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v; u--; v--;
        A[u].push_back(v);
        A[v].push_back(u);
    }

    vector<bool> V(n, false);
    cout << dfs(0, -1, A, V) << "\n";
}
