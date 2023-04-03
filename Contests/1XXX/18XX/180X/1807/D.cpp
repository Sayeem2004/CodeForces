#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N, Q; cin >> N >> Q;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;

        vector<long long> P(N + 1);
        for (long long i = 0; i < N; i++) {
            P[i + 1] = P[i] + V[i];
        }

        for (int i = 0; i < Q; i++) {
            long long l, r, k; cin >> l >> r >> k;
            long long sm = P[N] - P[r] + P[l - 1] + k * (r - l + 1);
            if (sm % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
