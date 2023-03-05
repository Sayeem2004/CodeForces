#include <bits/stdc++.h>
using namespace std;

int calc(int v1, int v2, int v3, vector<vector<int>> &A) {
    if (find(A[v2].begin(), A[v2].end(), v3) == A[v2].end()) return 1e9;
    if (find(A[v3].begin(), A[v3].end(), v2) == A[v3].end()) return 1e9;
    int cnt = 0;

    for (int i = 0; i < A[v1].size(); i++) {
        if (A[v1][i] != v2 && A[v1][i] != v3) cnt++;
    }
    for (int i = 0; i < A[v2].size(); i++) {
        if (A[v2][i] != v1 && A[v2][i] != v3) cnt++;
    }
    for (int i = 0; i < A[v3].size(); i++) {
        if (A[v3][i] != v1 && A[v3][i] != v2) cnt++;
    }

    return cnt;
}

int check(int v, vector<vector<int>> &A) {
    int mn = 1e9;

    for (int i = 0; i < A[v].size(); i++) {
        for (int q = i+1; q < A[v].size(); q++) {
            mn = min(mn, calc(v, A[v][i], A[v][q], A));
        }
    }

    return mn;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    vector<vector<int>> A(n);

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v; u--; v--;
        A[u].push_back(v);
        A[v].push_back(u);
    }

    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        ans = min(ans, check(i, A));
    }
    cout << (ans < 1e9 ? ans : -1) << "\n";
}
