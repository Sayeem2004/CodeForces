#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("", "r", stdin);
    // freopen("", "w", stdout);

    int T; cin >> T; while (T--) {
        long long N, K, Q; cin >> N >> K >> Q;
        vector<long long> V(N);
        for (long long &v : V) cin >> v;

        long long ans = 0, prev = -1;
        for (int i = 0; i < N; i++) {
            if (V[i] > Q) {
                long long n = max(0LL, i-prev-K);
                ans += n * (n + 1) / 2;
                prev = i;
            }
        }

        long long n = max(0LL, N-prev-K);
        ans += n * (n + 1) / 2;

        cout << ans << "\n";
    }
}
