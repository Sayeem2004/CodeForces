#include <bits/stdc++.h>
using namespace std;

void dfs(int v, int p, int d, vector<int> &D, vector<vector<int>> &A) {
    D[v] = d;
    for (int u : A[v]) {
        if (u == p) continue;
        dfs(u, v, d+1, D, A);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int N; cin >> N;
    vector<vector<int>> A(N);
    for (int i = 0; i < N-1; i++) {
        int a, b; cin >> a >> b;
        A[a-1].push_back(b-1);
        A[b-1].push_back(a-1);
    }

    vector<int> D(N, 1000000000), D1(N, 1000000000), D2(N, 1000000000);
    dfs(0, -1, 0, D, A);
    int v1 = max_element(D.begin(), D.end()) - D.begin();
    dfs(v1, -1, 0, D1, A);
    int v2 = max_element(D1.begin(), D1.end()) - D1.begin();
    dfs(v2, -1, 0, D2, A);

    map<int, int> M;
    for (int i = 0; i < N; i++) {
        M[max(D1[i], D2[i])]++;
    }

    int ans = 1;
    for (int i = 1; i <= N; i++) {
        cout << min(ans, N) << " ";
        ans += M[i];
    }
    cout << '\n';
}
