#include <bits/stdc++.h>
using namespace std;

array<int, 3> dfs(int v, vector<vector<int>> &A, string s) {
    array<int, 3> ans = {0, 0, 0};

    for (int u : A[v]) {
        array<int, 3> tmp = dfs(u, A, s);
        ans[0] += tmp[0]; ans[1] += tmp[1]; ans[2] += tmp[2];
    }

    if (s[v] == 'B') ans[0]++;
    else if (s[v] == 'W') ans[1]++;

    if (ans[0] == ans[1]) ans[2]++;
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int t; cin >> t; while (t--) {
        int n; cin >> n;

        vector<vector<int>> A(n);
        for (int i = 1; i < n; i++) {
            int x; cin >> x;
            A[x-1].push_back(i);
        }

        string s; cin >> s;

        cout << dfs(0, A, s)[2] << "\n";
    }
}
