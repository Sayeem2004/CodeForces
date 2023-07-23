#include <bits/stdc++.h>
using namespace std;

void dfs(long long v, long long p, vector<vector<long long>> &A, vector<long long> &C) {
    if (A[v].size() == 1 && v != 0) { C[v] = 1; return; }

    for (long long u : A[v]) {
        if (u == p) continue;
        dfs(u, v, A, C);
        C[v] += C[u];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N; cin >> N;
        vector<vector<long long>> A(N);

        for (long long i = 0; i < N-1; i++) {
            long long a, b; cin >> a >> b;
            A[a-1].push_back(b-1);
            A[b-1].push_back(a-1);
        }

        vector<long long> C(N);
        dfs(0, -1, A, C);

        long long Q; cin >> Q;
        for (long long i = 0; i < Q; i++) {
            long long a, b; cin >> a >> b;
            cout << C[a-1] * C[b-1] << '\n';
        }
    }
}
