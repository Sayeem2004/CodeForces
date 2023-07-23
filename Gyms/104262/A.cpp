#include <bits/stdc++.h>
using namespace std;

void dfs_dist(long long v, vector<vector<array<long long, 2>>> &A, vector<long long> &D) {
    for (auto [u, c] : A[v]) {
        D[u] = min(D[u], D[v] + c);
        dfs_dist(u, A, D);
    }
}

void dfs_size(long long v, vector<vector<array<long long, 2>>> &A, vector<long long> &S) {
    for (auto [u, c] : A[v]) {
        dfs_size(u, A, S);
        S[v] += S[u];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    long long N, C; cin >> N >> C;
    vector<vector<array<long long, 2>>> A(N);

    for (long long i = 0; i < N-1; i++) {
        long long a, b, c; cin >> a >> b >> c;
        A[b-1].push_back({a-1, c});
    }

    vector<long long> D(N, 1e16), S(N, 1);
    D[0] = 0; dfs_dist(0, A, D); dfs_size(0, A, S);

    long long sm = 0;
    for (long long i = 0; i < N; i++) sm += D[i];

    long long ans = sm;
    for (long long i = 0; i < N; i++) {
        ans = min(ans, sm - (D[i] - C) * S[i]);
    }

    cout << ans << '\n';
}
